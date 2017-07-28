#include <iostream>
#include <sstream>
#include <string>

#include "Game.h"
#include "Card.h"

using std::string;

class GameTester
{
	public:
		void printResult( string output, bool pass ) const
		{
			std::cout << ( pass ? "PASS\t" : "FAIL\t" ) << output << std::endl;
		}

		void testExistence() const
		{
			Card card;
			printResult( "Card Existence", true );
			Game game;
			printResult( "Game Existence", true );
		}

		void testConstructors() const
		{
			Card card;
			printResult( "Empty Constructor - Card", ( card.getName() == "NULL" ) && ( card.getDescription() == "NULL" ) );
			card = Card( "TestName", "TestDescription" );
			printResult( "Normal Constructor - Card", ( card.getName() == "TestName" ) && ( card.getDescription() == "TestDescription" ) );
		}
};

int main()
{
	GameTester gt;
	gt.testExistence();
	gt.testConstructors();

	return 0;
}
