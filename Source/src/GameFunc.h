#pragma once
#include"Game.h"
#include"MyGame.h"
#include <string>

int GenerateRandNum(int high, int low);



void comandIn(Player &myPlyer, WorldCommands myCommands);
// Ett komand filter som siker till comand funktionen 

// funktion som  använder metuder i comand classerna och de som ärver den 