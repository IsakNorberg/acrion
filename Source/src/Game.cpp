#include "Game.h"

Game::Game(unsigned int &screenWidth, unsigned int &screenHeight, const char* &title)
{
	screenWidth = 1920;
	screenHeight = 1080;
	title = "The Game";
	

};

Game::~Game()
{
}

bool Game::Update(float deltaTime)
{
	// gör så att det går eget asså fortsätter men kollar vad du skriver
	std::cout << "You are in a " << myMap[myPlayer.getPlayerX() * myPlayer.getPlayerY()] << "\n" << "wear do you want to go? \n";
	comandIn(myPlayer, myCommands);
	StringComand comand = "Hej";
	StringComand comand2 = "Hej";
	if (comand == comand2)
	{
		comand.toLower();
		comand2.toLower();
	}
	return true;
}

void Game::Draw(sf::RenderWindow& window)
{
	for (auto tile : myMap.myMapTile)
	{
		window.draw(tile.Sprite);
	}
	
}
