#pragma once
#include<string>
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
	Map(int size);
	MapTile* myMap = new MapTile[mapSize];

	const char* operator[](int position)
	{
		return myMap[position].getTerraienTyp();
	}
};
class Player
{
	int position_y;
	int position_x;
public:
	Player(int x, int y);
	Player();
	void setPlayerPosition(int x, int y);
	int getPlayerX();
	int getPlayerY();
	std::string move;
	GameState myGameState;
};
// Alla commands tas från functionen 

class WorldCommands
{

	void MoveTile(Player* myPlayer);
};
