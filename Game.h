//
// Created by jwmal on 6/14/2023.
//

#ifndef SUMMERGAMEDEV_GAME_H
#define SUMMERGAMEDEV_GAME_H

#include <iostream>

#include <SFMl/Graphics.hpp>
#include <SFMl/Audio.hpp>
#include <SFMl/System.hpp>
#include <SFMl/Window.hpp>
#include <SFMl/Network.hpp>

class Game {
    //making the window variable a pointer, remember to check if it is leaking memory
    sf::RenderWindow *gameWindow;
    sf::Event sfEvent;
    // clock used to balance frames
    sf::Clock diffClock;
    float diffTime;


public:
    //Constructor/destructor
    Game();
    virtual ~Game();

    //Setup stuff
    void createWindow();

    // Useful Engine functions
    void updateSFEvents();
    void updateGame();
    void renderWindow();
    void runGame();
    void updateDiffTime();

};


#endif //SUMMERGAMEDEV_GAME_H
