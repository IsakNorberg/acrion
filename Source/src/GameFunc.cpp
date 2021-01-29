#include "GameFunc.h"
#include "Game.h"   
#include <iostream>
   
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
void commandIn(std::string command)
{

	
}