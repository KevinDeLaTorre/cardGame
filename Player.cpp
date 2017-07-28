// Author: Kevin De La Torre

#include "Player.h"
#include "constants.h"

Player::Player()
	: hp( INITHP ), mana( MINMANA )
{}

Player::Player( bool player )
	: hp( INITHP ), mana( MINMANA ), playerNum( player )
{
}

int Player::getHp() const
{
	return hp;
}

int Player::getMana() const
{
	return mana;
}

bool Player::getPlayerNum() const
{
	return playerNum;
}

Player::setHp( int n )
{
	if ( n >= 0 )
	{
		hp = n;
	} else
	{
		hp = 0;
	}

}

Player::setMana( int n )
{
	if ( n < 0 )
	{
		mana = 0;
	} else if ( n > MAXMANA )
	{
		mana = MAXMANA;
	} else
	{
		mana = n;
	}
}

Player::increaseHp( int n )
{
	setHp( hp + n );
}

Player::decreaseHp( int n )
{
	setHp( hp - n );

}

Player::increaseMana( int n )
{
	setMana( mana + n );
}

Player::decreaseMana( int n )
{
	setMana( mana - n );
}

Player::flipPlayerNum()
{
	playerNum = !playerNum;
}
