#include <iostream>
#include <sstream>
#include <string>

#include "Constants.h"
#include "Game.h"
#include "Card.h"
#include "Player.h"

using std::string;

class GameTester
{
	public:
		void printResult( string output, bool pass ) const
		{
			std::cout << ( pass ? "PASS\t" : "FAIL\t" ) << output << std::endl;
		}

		void printTitle( string title )
		{
			std::cout << std::endl << "-- " << title << " --" << std::endl;
		}


		void testExistence() 
		{
			printTitle( "Existence Test" );
			Card card;
			printResult( "Card Existence", true );
			Game game;
			printResult( "Game Existence", true );
		}

		void testConstructors()
		{
			printTitle( "Constructor Test" );
			Card card;
			printResult( "Card - Empty", ( card.getName() == "NULL" ) && ( card.getDescription() == "NULL" ) );
			card = Card( "TestName", "TestDescription" );
			printResult( "Card - Normal", ( card.getName() == "TestName" ) && ( card.getDescription() == "TestDescription" ) );
			Player player;
			printResult( "Player - Empty", ( player.getHp() == INITHP ) && ( player.getMana() == MINMANA ) );
			player = Player( 1 );
			printResult( "Player - Normal", ( player.getHp() == INITHP ) && ( player.getMana() == MINMANA ) && player.getPlayerNum() );
		}

		void testCard()
		{
			printTitle( "Card Test" );
			Card card( "hello", "world" );
			printResult( "Str function", card.str() == "Name: hello\nDescription: world" );
		}

		void testPlayer()
		{
			printTitle( "Player Test" );
			Player player( 0 );
			player.increaseHp( 10 );
			printResult( "Increase hp", player.getHp() == ( INITHP + 10 ) );
			player.decreaseHp( 10 );
			printResult( "Decrease hp", player.getHp() == INITHP );
			player.decreaseHp( player.getHp() + 5 );
			printResult( "Decrease hp below zero", player.getHp() == 0 );

			player.increaseMana( 3 );
			printResult( "Increase mana", player.getMana() == ( MINMANA + 3 ) );
			player.increaseMana( player.getMana() + MAXMANA );
			printResult( "Increase mana past max", player.getMana() == MAXMANA );
			player.decreaseMana( 4 );
			printResult( "Decrease mana", player.getMana() == ( MAXMANA - 4 ) );
			player.decreaseMana( MAXMANA + 5 );
			printResult( "Decrease mana below zero", player.getMana() == 0 );

			player.flipPlayerNum();
			printResult( "Flip player num", player.getPlayerNum() == 1 );
		}
};

int main()
{
	GameTester gt;
	gt.testExistence();
	gt.testConstructors();
	gt.testCard();
	gt.testPlayer();

	return 0;
}
