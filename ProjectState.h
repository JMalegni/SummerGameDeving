//
// Created by jwmal on 6/15/2023.
//
#pragma once

#include <iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<stack>
#include<map>

#include <SFMl/Graphics.hpp>
#include <SFMl/Audio.hpp>
#include <SFMl/System.hpp>
#include <SFMl/Window.hpp>
#include <SFMl/Network.hpp>

// object for the various states of the project: Start menu, in game etc...
// will be inherited from for specific cases
class projectState {
    // vector of any textures that the current game state may need
    // a vector is a data container very similar to a list/array. they are more convenient to use in c++
    std::vector<sf::Texture> textures;
    sf::RenderWindow* gameWindow;



public:
    bool isKillState;
    const bool &getKillState() const;

    // public functions
    projectState(sf::RenderWindow* gameWindow);
    virtual ~projectState();

    //pure virtual functions, ensures that these functions must be defined in derived classes
    virtual void updateState(const float& diffTime) = 0;
    //this rendertarget parameter allows me to choose where the renderState function renders to if I desire
    virtual void renderState(sf::RenderTarget* stateTarget = nullptr) = 0;

    virtual void checkKillState();
    virtual void killState() = 0;

    virtual void updateKeyBinds(const float &dt) = 0;

};











// deriving a new class called gameState from ProjectState. deriving a class from a parent makes it a child class
// each child inherits the functions and variables that the parent has but they are unique to the child. Additional
// functions or variables can be added to a child, but they will not affect the parent class
class gameState : public projectState{


public:
    gameState(sf::RenderWindow* gameWindow);
    virtual ~gameState();

    //functions. These need to be defined for every child class of projectState because they are pure virtual=0 functions
    void updateState(const float& diffTime);
    void renderState(sf::RenderTarget* stateTarget = nullptr);

    void killState();

    void updateKeyBinds(const float &dt); // dt means diffTime

};