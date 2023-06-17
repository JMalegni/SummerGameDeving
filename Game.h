//
// Created by jwmal on 6/14/2023.
//

#pragma once

#include <iostream>

#include "projectState.h"


class Game {
    //making the window variable a pointer, remember to check if it is leaking memory
    sf::RenderWindow *gameWindow;
    sf::Event sfEvent;
    // clock used to balance frames
    sf::Clock diffClock;
    float diffTime;

    // I have created a stack, which is a data structure, and it is called states. data structures are like special
    // containers that have different ways of calling the information stored within
    std::stack<projectState*> states;
    // for a stack, imagine a stack of cards. Each card is a piece of data. once the top is accessed and removed,
    // the card under it becomes the top card. if I were to add another card, it would become the new top.
    //"first in, last out"

public:
    //Constructor/destructor
    Game();
    virtual ~Game();

    //Setup stuff
    void createWindow();
    void addState();

    // Useful Engine functions
    void updateSFEvents();
    void updateGame();
    void renderWindow();
    void runGame();
    void updateDiffTime();

};
