#include "Board.h"
#include <iostream>
#include <sstream>

Board::Board()
{
	for ( int i = 0; i < BOARDWIDTH; i++ )
       	{
		for ( int j = 0; j < BOARDHEIGHT; j++ )
		{
			clearPoint( i, j );
		}
	}

	// Setup up the border
	for ( int i = 0; i < BOARDWIDTH; i++ ) 
	{
		drawPoint( i, 0, DRAWSYMBOL );
		drawPoint( i, ( BOARDHEIGHT - 1 ), DRAWSYMBOL );
	}

	for ( int i = 1; i < ( BOARDHEIGHT - 1 ); i++ ) {
		drawPoint( 0, i, DRAWSYMBOL );
		drawPoint( ( BOARDWIDTH - 1 ), i, DRAWSYMBOL );
	}
}

Board::clearPoint( int x, int y )
{
	board[ x ][ y ] = ' ';
}

Board::drawPoint( int x, int y, char z )
{
	board[ x ][ y ] = z;
}

char Board::getPoint( int x, int y )
{
	return board[ x ][ y ];
}

std::string Board::draw()
{
	std::stringstream drawnBoard;
	for ( int i = 0; i < BOARDHEIGHT; i++ )
	{
		for ( int j = 0; j < BOARDWIDTH; j++ )
		{
			drawnBoard << getPoint( j, i );
		}
		drawnBoard << "\n";
	}
	return drawnBoard.str();
}
