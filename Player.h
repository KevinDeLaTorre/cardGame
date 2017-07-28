#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <iostream>
#include "Constants.h"

class Player
{
	private:
		int hp;
		int mana;
		bool playerNum;
		setHp( int n );
		setMana( int n ); 

	public:
		Player();
		Player( bool player );

		int getHp() const;
		int getMana() const;
		bool getPlayerNum() const;

		increaseHp( int n );
		decreaseHp( int n );

		increaseMana( int n );
		decreaseMana( int n );

		flipPlayerNum();
};


#endif
