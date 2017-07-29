#ifndef CARD_H
#define CARD_H

#include "Constants.h"
#include <string>
#include <iostream>

class Card
{
	private:
		std::string Name;
		std::string Description;
		char card [ CARDWIDTH ][ CARDHEIGHT ];

	public:
		Card();
		Card( std::string Name, std::string Description );

		std::string draw();

		std::string getName() const;
		std::string getDescription() const;

		char getPoint( int x, int y );

		std::ostream& operator<< (Card& obj) {
			return std::cout << obj.draw();
		}

};

#endif
