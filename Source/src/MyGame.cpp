#include "MyGame.h"

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

void MapTile::setMyTerrain(int inNumber)
{
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
void WorldCommands::MoveTile(Player* myPlayer)
{
	if (myPlayer->move == "n")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX(), myPlayer->getPlayerY() + 1);
	else if (myPlayer->move == "e")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX() + 1, myPlayer->getPlayerY());
	else if (myPlayer->move == "s")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX(), myPlayer->getPlayerY() - 1);
	else if (myPlayer->move == "w")
		myPlayer->setPlayerPosition(myPlayer->getPlayerX() - 1, myPlayer->getPlayerY());
	// do if i can walk their cheek
}
