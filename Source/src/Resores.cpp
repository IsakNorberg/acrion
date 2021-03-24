#include "Resores.h"

resorses::resorses()
{
	if (!dessertTexture.loadFromFile("Assets/Dessert.png"))
		printf("Något gick fel med öken");
	if (!forestTexture.loadFromFile("Assets/Forrest.png"))
		printf("Något gick fel med Forest");
	if (!gras_landTexture.loadFromFile("Assets/Grass_Land.png"))
		printf("Något gick fel med Gras");

}
