#pragma once

#include "SFML/Graphics.hpp"
#include "MyGame.h"
#include "GameFunc.h"
#include <iostream>
#include "Resores.h"


class Game
{
	resorses resorses;
public:
	Game(unsigned int &screenWidth, unsigned int &screenHeight, const char* &title);
	~Game();
	/// Return Value
	/// true = Continue to run program
	/// false = Quits program
	bool Update(float deltaTime); 
	void Draw(sf::RenderWindow& window);
	Map myMap;
	Player myPlayer;
	WorldCommands myCommands;
private:

};