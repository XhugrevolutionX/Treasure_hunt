// Treasure_hunt.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include <array>
#include "treasure_hunt.h"

int main()
{
	std::srand(std::time(nullptr));

	Map map;

	map.initialize();
	map.place_treasure();

	for(int tries = 0; tries < 10; tries++)
	{
		map.display();
		map.dig();
	}



	//(rows - 1) * size rows + (col - 1)
}