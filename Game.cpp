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
void Game::createWindow() {
    // Load window size from another file
    this -> gameWindow = new sf::RenderWindow (sf::VideoMode(800, 600), "Start Game");
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
    while ( this -> gameWindow->isOpen())
    {
       this->updateGame();
       this->renderWindow();
    }
}