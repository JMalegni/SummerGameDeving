//
// Created by jwmal on 6/15/2023.
//

#include "ProjectState.h"

projectState::projectState( sf::RenderWindow* gameWindow) {
    this -> gameWindow = gameWindow;
}

projectState::~projectState() {

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

}

void gameState::renderState(sf::RenderTarget* stateTarget) {
    std::cout << "This is from the render function of the game state" << std::endl;
}

//this function will get us out of the desired state, allowing us to escape from one state into another
void gameState::killState() {

}
