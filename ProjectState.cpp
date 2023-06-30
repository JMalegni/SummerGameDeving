//
// Created by jwmal on 6/15/2023.
//

#include "ProjectState.h"

projectState::projectState( sf::RenderWindow* gameWindow) {
    this -> gameWindow = gameWindow;
    this -> isKillState = false;
}

projectState::~projectState() {

}

void projectState::checkKillState() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
        this -> isKillState = true;
    }
}

const bool &projectState::getKillState() const {
    return this -> isKillState;
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
gameState::gameState(sf::RenderWindow* gameWindow) : projectState(gameWindow){

}
//gameState destructor
gameState::~gameState() {

}

//function definitions
void gameState::updateState(const float& diffTime) {
    this -> updateKeyBinds(diffTime);

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        std::cout << "A" << std::endl;
    }

}

void gameState::renderState(sf::RenderTarget* stateTarget) {

}

//this function will get us out of the desired state, allowing us to escape from one state into another
void gameState::killState() {
    std::cout << "ending game state" << std::endl;
}

void gameState::updateKeyBinds(const float &dt) {
    this -> checkKillState();



}
