//
// Created by jwmal on 6/14/2023.
//

#include "Game.h"

// Constructors/ destructor
Game::Game() {
    this -> createWindow();
}
Game::~Game(){
    delete this -> gameWindow;
}
// Window setup
void Game::createWindow() {\
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
}

void Game::renderWindow() {
    this -> gameWindow -> clear();


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

    //command to clear the screen
    system("cls");
    std:: cout << this -> diffTime << std::endl;
}
