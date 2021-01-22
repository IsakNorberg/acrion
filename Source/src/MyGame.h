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
	void setMyTerrain(int xyPosition);
	const char* getTerraienTyp();
	Terrain getTerrainEnum();
};
class Player
{
	int position_y;
	int position_x;
public:
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
