#pragma once
#include<string>
#include"String.h"
#include "SFML/Graphics.hpp"
#include "Resores.h"
enum class Terrain
{
	Null,
	Dessert,
	GrasLand,
	Forest
	
};
enum class GameState
{
	Null,
	OverWorld
};
class MapTile
{
	resorses myresorses;
	// TODO: Fixa texure

	Terrain myTerrain;
public:
	sf::Sprite Sprite;
	MapTile();
	void setMyTerrain();
	void setSprite();
	
	const char* getTerraienTyp();
	Terrain getTerrainEnum();

};
class Map
{
	int mapSize = 0;// fixa med detta tror jag så att den fixs
public:
	Map();
	void setTilePos();
	MapTile myMapTile[1000];
	const char* operator[](int position);
	
};
class Player
{
	int position_y = 0;
	int position_x = 0;
	StringComand command = "null";
	GameState myGameState;
public:
	Player(int x, int y);
	Player();
	void setPlayerPosition(int x, int y);
	int getPlayerX();
	int getPlayerY();
	void move(int x, int y);
	StringComand getCommand();
	void setCommand(StringComand comand);
	GameState getGameState();
	
};
// Alla commands tas från functionen 

class WorldCommands : Map
{
public:
	WorldCommands();
	void commands(Player* myPlayer, StringComand Comand);
	void MoveTile(Player* myPlayer);
};
