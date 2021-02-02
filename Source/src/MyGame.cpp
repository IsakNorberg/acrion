#include "MyGame.h"
#include "GameFunc.h"
#include <iostream>

Player::Player(int x, int y)
{
	setPlayerPosition(x, y);
	myGameState = GameState::OverWorld;
}

Player::Player()
{
	myGameState = GameState::OverWorld;
}

void Player::setPlayerPosition(int x = 1, int y = 1)
{
	position_x = x;
	position_y = y;
}
int Player::getPlayerX()
{
	return(position_x);
}
int Player::getPlayerY()
{
	return(position_y);
}

void Player::move()
{
	
}

StringComand Player::getCommand()
{
	return command;
}

void Player::setCommand(StringComand comand)
{
	comand.toLower();
}

MapTile::MapTile()
{
	setMyTerrain();
}



void MapTile::setMyTerrain()
{
	int inNumber = GenerateRandNum(3, 1);
	Terrain outTerrain;
	if (inNumber == 1)
		outTerrain = Terrain::Dessert;
	else if (inNumber == 2)
		outTerrain = Terrain::GrasLand;
	else if (inNumber == 3)
		outTerrain = Terrain::Forest;
	else
		outTerrain = Terrain::Null;
	myTerrain = outTerrain;
}
const char* MapTile::getTerraienTyp()
{
	if (myTerrain == Terrain::Dessert)
		return("Dessert");
	else if (myTerrain == Terrain::GrasLand)
		return("Grass land");
	else if (myTerrain == Terrain::Forest)
		return("Forest");
	else
		return("Null");
}
Terrain MapTile::getTerrainEnum()
{
	return(myTerrain);
}
WorldCommands::WorldCommands()
{

}
void WorldCommands::commands(Player* myPlayer)
{

	switch (switch_on)
	{
	default:
		break;
	}
}
void WorldCommands::MoveTile(Player* myPlayer)
{
	if (myPlayer->getCommand() == "n")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX(), myPlayer->getPlayerY() + 1);
	else if (myPlayer->getCommand() == "e")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX() + 1, myPlayer->getPlayerY());
	else if (myPlayer->getCommand() == "s")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX(), myPlayer->getPlayerY() - 1);
	else if (myPlayer->getCommand() == "w")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX() - 1, myPlayer->getPlayerY());
	// do if i can walk their cheek
}

Map::Map()
{
}

Map::Map(int size)
{
	mapSize = size;
}

const char* Map::operator[](int position)
{
	return myMapTile[position].getTerraienTyp();
}
