#pragma once
#include<string>
#include"String.h"
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
	// TODO: Fixa texure
	Terrain myTerrain;
public:
	MapTile();
	void setMyTerrain();
	const char* getTerraienTyp();
	Terrain getTerrainEnum();

};
class Map
{
	int mapSize = 1000;// fixa med detta tror jag så att den fixs
public:
	Map();
	Map(int size);
	MapTile* myMapTile = new MapTile[mapSize];
	const char* operator[](int position);
	
};
class Player
{
	int position_y = 1;
	int position_x = 1;
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
