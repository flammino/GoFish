// GoFish.cpp
// Go Fish game
// Created by SDEV-345 class at Champlain College 6/2/2017

#include "stdafx.h"
#include<iostream>
#include "Card.h"

int main()
{
	int choice;
	std::cout << "Enter 1 to start a new game, 2 to continue a game, 3 to quit" << std::endl;
	std::cin >> choice;
	do {
		switch(choice) {
		case 1:
			// new game code
			break;
		case 2:
			// continue game code
			break;
		case 3:
			// quit code
			break;
		default:
			std::cout << "Invalid choice! Please enter 1 to start a new game, 2 to continue a game, or 3 to quit."<<std::endl;
			std::cin >> choice;
		}

	} while (choice != 1 && choice != 2 && choice != 3);
    return 0;
}

