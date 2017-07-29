#ifndef BOARD_H
#define BOARD_H

#include "Constants.h"
#include <string>
#include <iostream>

class Board
{
	private:
		char board [ BOARDWIDTH ][ BOARDHEIGHT ];
	
	public:
		// Constructors/Destructor
		Board();

		drawPoint( int x, int y, char z );
		clearPoint( int x, int y );
		char getPoint( int x, int y );

		std::string draw();

		// Overload the << operator to return str function
		std::ostream& operator<< (Board& obj) {
			return std::cout << obj.draw();
		}
};

#endif
