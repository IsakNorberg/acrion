#include "GameFunc.h"
#include "Game.h"   
#include<iostream>
#include <stdlib.h>     
#include <time.h>   
#include <algorithm>
#include <cctype>



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
//void commandIn(std::string command)
//{
//
//	std::transform(command.begin(), command.end(), command.begin(), std::tolower);
//	std::cout << command;
//}