#include "GameFunc.h" 
#include <iostream>
#include "String.h"
#include <time.h>   




int GenerateRandNum(int high, int low)
{ 
	static bool loop = true;

	int number;
	if(loop)
		srand(static_cast <unsigned int>(time(nullptr)));
	number = rand() % high + low;
	
	loop = false;
	return(number);
}

void comandIn(Player &myPlyer, WorldCommands myComands)
{
	StringComand returnString;
	std::cin >> returnString.text;
	returnString.toLower();
	myComands.commands(&myPlyer);
}
