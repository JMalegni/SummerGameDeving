//
// Created by jwmal on 6/15/2023.
//
#pragma once
#include "Characters.h"

// object for the various states of the project: Start menu, in game etc...
// will be inherited from for specific cases
class projectState {

public:
    sf::RenderWindow* gameWindow;

    std::map<std::string, int> *allowedKeys;
    std::map<std::string, int> keybinds;
    // vector of any textures that the current game state may need
    // a vector is a data container very similar to a list/array. they are more convenient to use in c++
    std::vector<sf::Texture> textures;

    bool isKillState;
    const bool &getKillState() const;

    // public functions
    projectState(sf::RenderWindow* gameWindow, std::map<std::string, int> *allowedKeys);
    virtual ~projectState();

    //pure virtual functions, ensures that these functions must be defined in derived classes
    virtual void updateState(const float& diffTime) = 0;
    //this rendertarget parameter allows me to choose where the renderState function renders to if I desire
    virtual void renderState(sf::RenderTarget* stateTarget = nullptr) = 0;

    virtual void checkKillState();
    virtual void killState() = 0;

    virtual void updateInput(const float &dt) = 0;
    virtual void createDefaultKeybinds() = 0;

};











// deriving a new class called gameState from ProjectState. deriving a class from a parent makes it a child class
// each child inherits the functions and variables that the parent has but they are unique to the child. Additional
// functions or variables can be added to a child, but they will not affect the parent class
class gameState : public projectState{

    Characters player;

    void createDefaultKeybinds();


public:
    gameState(sf::RenderWindow *gameWindow, std::map<std::string, int> *allowedKeys);
    virtual ~gameState();

    //functions. These need to be defined for every child class of projectState because they are pure virtual=0 functions
    void updateState(const float& diffTime);
    void renderState(sf::RenderTarget* stateTarget = nullptr);

    void killState();

    void updateInput(const float &diffTime); // dt means diffTime
};












class mainMenuState : public projectState{

    sf::RectangleShape background;
    void createDefaultKeybinds();


public:
    mainMenuState(sf::RenderWindow *gameWindow, std::map<std::string, int> *allowedKeys);
    virtual ~mainMenuState();

    //functions. These need to be defined for every child class of projectState because they are pure virtual=0 functions
    void updateState(const float& diffTime);
    void renderState(sf::RenderTarget* stateTarget = nullptr);

    void killState();

    void updateInput(const float &diffTime); // dt means diffTime
};