#include "Resores.h"

resorses::resorses()
{
	if (!dessertTexture.loadFromFile("Assets/Dessert.png"))
		printf("N�got gick fel med �ken");
	if (!forestTexture.loadFromFile("Assets/Forrest.png"))
		printf("N�got gick fel med Forest");
	if (!gras_landTexture.loadFromFile("Assets/Grass_Land.png"))
		printf("N�got gick fel med Gras");

}
