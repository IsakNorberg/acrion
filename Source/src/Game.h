#pragma once

#include "SFML/Graphics.hpp"

class Game
{
public:
	Game(unsigned int &screenWidth, unsigned int &screenHeight, const char* &title);
	~Game();
	/// Return Value
	/// true = Continue to run program
	/// false = Quits program
	bool Update(float deltaTime); 
	void Draw(sf::RenderWindow& window);
private:

};