#include "Menu.h"
#include "Dotal.h"

#include <iostream>


// Has options x x Freeplay Worlds
// Click on Worlds and there will be 4 boxes on the screen
Menu::Menu() {

	curScreen = MAINSCREEN;

    int titleSpace = SCREENHEIGHT / 5;


    int worldBoxHeight = (SCREENHEIGHT / 5);
    int worldBoxWidth = (SCREENWIDTH / 5);

    sf::RectangleShape worldBox(sf::Vector2f(worldBoxHeight, worldBoxWidth));

    menuShapes.box1World = worldBox;
    menuShapes.box2World = worldBox;
    menuShapes.box3World = worldBox;
    menuShapes.box4World = worldBox;

    int xBuffer = (SCREENWIDTH - (4 * worldBoxWidth)) / 4;
    int yBuffer = ((SCREENHEIGHT - titleSpace) - (4 * worldBoxHeight)) / 4;

    

    menuShapes.box1World.setPosition(xBuffer, yBuffer + titleSpace);
    menuShapes.box2World.setPosition(xBuffer * 2 + worldBoxWidth, yBuffer + titleSpace);
    menuShapes.box3World.setPosition(xBuffer, yBuffer * 2 + worldBoxHeight + titleSpace);
    menuShapes.box4World.setPosition(xBuffer * 2 + worldBoxWidth, yBuffer * 2 + worldBoxHeight + titleSpace);


}

void Menu::drawMainScreen(window) {



}

void Menu::drawWorldScreen(window) {


}

void Menu::switchToWorld() {
    curScreen = WORLDSCREEN;
}

void Menu::switchToMain() {
    curScreen = MAINSCREEN;
}

// FUNCTION SELECTORS

void Menu::draw() {
    if (curScreen == MAINSCREEN) drawMainScreen();
    else if (curScreen == WORLDSCREEN) drawWorldScreen();
}

int Menu::clicked() {


}


int runMenu(window) {

	Menu menuObj;

    bool running = true;
    int result;

    while (running) {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) {
                running = false;
            }
            else if (event.type == sf::Event::MouseButtonPressed) {
                result = menuObj.clicked();

                // Anything bigger than 0 is a world
                if (result > 0) running = false;

                else if (result == GOTOMAINMENU) menuObj.switchToMain();
                else if (result == GOTOWORLDMENU) menuObj.switchToWorld();
            }
        }

        menuObj.draw();

        window.clear();

    }

    return result;
}