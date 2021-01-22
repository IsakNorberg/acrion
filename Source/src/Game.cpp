#include "Game.h"

Game::Game(unsigned int &screenWidth, unsigned int &screenHeight, const char* &title)
{
	screenWidth = 640;
	screenHeight = 480;
	title = "The Game";
};

Game::~Game()
{
}

bool Game::Update(float deltaTime)
{
	return true;
}

void Game::Draw(sf::RenderWindow& window)
{
}
