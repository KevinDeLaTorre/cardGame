#ifndef GAME_H
#define GAME_H

#include <string>
#include <iostream>

#include "Card.h"

class Game
{
	public:
		// Initializer
		Game();

		// Disallow copying of game objects, don't want duplicate games
		Game( const Game& other ) = delete;
		Game& operator=( const Game& right ) = delete;

		// Cleanup/deconstructor
		~Game();

		int operator()();
};

#endif
