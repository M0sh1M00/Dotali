#pragma once

#define MAINSCREEN 1
#define WORLDSCREEN 2

// Return values from the Menu::click method

#define GOTOWORLDMENU -2
#define GOTOMAINMENU -1
#define NOTHING 0
#define WORLD1 1
#define WORLD2 2
#define WORLD3 3
#define WORLD4 4

struct menuShapesStruct {

	sf::RectangleShape titleImage;

	// Main Menu Shapes

	sf::RectangleShape box1Main;
	sf::RectangleShape box2Main;
	sf::RectangleShape box3Main;
	//sf::RectangleShape box4Main;


	// World Menu Shapes

	sf::RectangleShape box1World;
	sf::RectangleShape box2World;
	sf::RectangleShape box3World;
	sf::RectangleShape box4World;

	sf::Text name1World;
	sf::Text name2World;
	sf::Text name3World;
	sf::Text name4World;

	int test;
};

class Menu
{
	int curScreen;

	struct menuShapesStruct menuShapes;

public:
	Menu();
	void drawMainScreen(window);
	void drawWorldScreen(window);

	void switchToWorld();
	void switchToMain();

	void draw(window);
	int clicked();

};


int runMenu(window);