//
// Created by jwmal on 6/14/2023.
//

#include "Game.h"

// Constructors/ destructor
Game::Game() {
    this -> createWindow();
    this -> defaultKeys();
    this -> addState();
}
Game::~Game(){
    delete this -> gameWindow;
    // iterating through the state stack and deleting the dynamically allocated states
    while(!this -> states.empty()){
        delete this -> states.top(); // removes the data in pointer
        this -> states.pop(); // deletes the actual pointer to the memory address
    }
}
// Window setup
void Game::createWindow() {
    // initializing window creation variables
    sf::VideoMode windowBounds(800, 600);
    std::string windowTitle = "";
    unsigned int framerateLim = 120;
    bool vertical_sync_enable = false;

    // reading in values from a window configuration text file. specific order is very important
    std::ifstream readStream("projectConfig/windowConfig.txt");
    if (readStream.is_open()){
        std::getline(readStream, windowTitle);
        readStream >> windowBounds.width >> windowBounds.height;
        readStream >> framerateLim;
        readStream >> vertical_sync_enable;
    }
    else{
        std::cout << "config file not opened";
    }

    this -> gameWindow = new sf::RenderWindow (windowBounds, windowTitle);
    this -> gameWindow ->setFramerateLimit(framerateLim);
    this -> gameWindow ->setVerticalSyncEnabled(vertical_sync_enable);

}

// Engine Functions
void Game::updateSFEvents() {
    while (this -> gameWindow ->pollEvent(sfEvent))
    {
        if (this -> sfEvent.type == sf::Event::Closed)
            this -> gameWindow->close();
    }

}

void Game::updateGame() {
    this -> updateSFEvents();

    //this if statement updates the top state of the state stack if it is not empty.
    // the top state of the stack is the current state that the project is in
    if(!this -> states.empty()){
        this -> states.top() -> updateState(this -> diffTime);

        // basically doing the destructor's job but allowing for future save implementation
        if (this -> states.top() -> getKillState()){

            this -> states.top()->killState();
            delete this -> states.top();
            this -> states.pop();
        }
    }
    //kill the entire project
    else{
        this -> killProject();
        this -> gameWindow->close();
    }
}

void Game::renderWindow() {
    this -> gameWindow -> clear();

    if(!this -> states.empty()){
        this -> states.top() -> renderState(this -> gameWindow);

    }

    this -> gameWindow -> display();

}

void Game::runGame() {
    while (this -> gameWindow -> isOpen())
    {
       this->updateGame();
       this->renderWindow();

       this -> updateDiffTime();
    }
}

// used to update the time variable string time between frames / updates
void Game::updateDiffTime() {

    this -> diffTime = this -> diffClock.restart().asSeconds();

    //command to clear the console
    system("cls");
    std:: cout << this -> diffTime << std::endl;
}

void Game::addState() {
    //dynamically creating a new state and adding it to the state stack
    this -> states.push(new gameState(this->gameWindow, &this -> allowedKeys));


}

void Game::killProject() {
    std::cout << "Ending the project" << std::endl;
}

void Game::defaultKeys() {

    std::ifstream keyStream("projectConfig/keybindConfig.txt");

    if (keyStream.is_open()) {
        std::string key;
        int keyVal;

        while (keyStream >> key >> keyVal){
            this -> allowedKeys[key] = keyVal;
        }
    }

    // TODO Remove, used to debug keybinding
    for (auto i : this -> allowedKeys){
        std::cout << i.first << " " << i.second << std::endl;
    }

}