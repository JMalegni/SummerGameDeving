//
// Created by jwmal on 6/15/2023.
//

#include "ProjectState.h"

projectState::projectState( sf::RenderWindow* gameWindow, std::map<std::string, int> *allowedKeys) {
    this -> gameWindow = gameWindow;
    this -> isKillState = false;
    this -> allowedKeys = allowedKeys;
}

projectState::~projectState() {

}

void projectState::checkKillState() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this->keybinds.at("Exit_State")))){
        this -> isKillState = true;
    }
}

const bool &projectState::getKillState() const {
    return this -> isKillState;
}

void projectState::updateMousePositions() {
    this -> mouseScreenPos = sf::Mouse::getPosition();
    this -> mouseWindowPos = sf::Mouse::getPosition(*this -> gameWindow);
    //taking one pixel on the screen and mapping the mouse position to it
    this -> mouseViewPos = this -> gameWindow -> mapPixelToCoords(sf::Mouse::getPosition(*this -> gameWindow));

}



/*
 *
 *
 *
 * Start of Game state, a derived class from projectState, it will be used during the actual gameplay element
 *after "start is selected on the start screen
 *
 *
 */
// game state constructor takes in a pointer from projectState called gameWindow
gameState::gameState(sf::RenderWindow *gameWindow, std::map<std::string, int> *allowedKeys) : projectState(gameWindow, allowedKeys){
    this -> createDefaultKeybinds();
}
//gameState destructor
gameState::~gameState() {

}

//function definitions
void gameState::updateState(const float& diffTime) {
    this -> updateInput(diffTime);

    this -> player.updateCharacter(diffTime);

}

void gameState::renderState(sf::RenderTarget *stateTarget) {
    if (stateTarget != nullptr){
        stateTarget = this -> gameWindow;
    }
    this -> player.renderCharacter(stateTarget);

}

//this function will get us out of the desired state, allowing us to escape from one state into another
void gameState::killState() {
    std::cout << "ending game state" << std::endl;
}

void gameState::updateInput(const float &diffTime) {
    this->checkKillState();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this -> keybinds.at("Move_Left")))) {
        this->player.moveCharacter(diffTime, -.25f, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this -> keybinds.at("Move_Right")))) {
        this->player.moveCharacter(diffTime, .25f, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this -> keybinds.at("Move_Up")))) {
        this->player.moveCharacter(diffTime, 0.f, -.25f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key(this -> keybinds.at("Move_Down")))) {
        this->player.moveCharacter(diffTime, 0.f, .25f);

    }
}

void gameState::createDefaultKeybinds() {
    std::ifstream keyStream("projectConfig/gameStateKeybindConfig.txt");

    if (keyStream.is_open()) {
        std::string key;
        std::string keyNum;

        while (keyStream >> key >> keyNum){
            this -> keybinds[key] = this -> allowedKeys->at(keyNum);
        }
    }
}

/*
 *
 *
 *
 * Main Menu state stuff
 *
 *
 *
 */

mainMenuState::mainMenuState(sf::RenderWindow *gameWindow, std::map<std::string, int> *allowedKeys) : projectState(gameWindow, allowedKeys){
    this -> createDefaultKeybinds();
    this -> background.setSize(sf::Vector2f(gameWindow->getSize().x, gameWindow->getSize().y));
    this -> background.setFillColor(sf::Color::Cyan);
    this -> createFonts();
}
//gameState destructor
mainMenuState::~mainMenuState() {

}

//function definitions
void mainMenuState::updateState(const float& diffTime) {
    this -> updateInput(diffTime);
    this -> updateMousePositions();

}

void mainMenuState::renderState(sf::RenderTarget *stateTarget) {
    if (stateTarget != nullptr){
        stateTarget = this -> gameWindow;
    }
    stateTarget -> draw(this->background);

}

//this function will get us out of the desired state, allowing us to escape from one state into another
void mainMenuState::killState() {
    std::cout << "ending game state" << std::endl;
}

void mainMenuState::updateInput(const float &diffTime) {
    this->checkKillState();

    this -> updateMousePositions();
    system("cls");
    std::cout << this -> mouseViewPos.x << " " << this -> mouseViewPos.y << std::endl;
}

void mainMenuState::createDefaultKeybinds() {
    std::ifstream keyStream("projectConfig/gameStateKeybindConfig.txt");

    if (keyStream.is_open()) {
        std::string key;
        std::string keyNum;

        while (keyStream >> key >> keyNum){
            this -> keybinds[key] = this -> allowedKeys->at(keyNum);
        }
    }
}

void mainMenuState::createFonts() {
    //free to use font by user mrmanet at https://www.dafont.com/vcr-osd-mono.font
    if (!this -> mainMenuFont.loadFromFile("projectConfig/VCR_OSD_MONO_1.001.ttf")){
        throw("ERROR: MainMenuState: Could not load font");
    }
}
