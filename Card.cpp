#include "Card.h"
#include <sstream>

Card::Card()
	: Name( "NULL" ), Description( "NULL" )
{}

Card::Card( std::string name, std::string desc )
	: Name( name ), Description( desc )
{
	for ( int i = 0; i < CARDWIDTH; i++ )
	{
		for ( int j = 0; j < CARDHEIGHT; j++ )
		{
			card[ i ][ j ] = ' ';
		}
	}


	for ( int i = 0; i < CARDWIDTH; i++ )
	{
		card[ i ][ 0 ] = DRAWSYMBOL;
		card[ i ][ CARDHEIGHT - 1 ] = DRAWSYMBOL;
	}

	for ( int i = 1; i < ( CARDHEIGHT - 1 ); i++ )
	{
		card[ 0 ][ i ] = DRAWSYMBOL;
		card[ CARDWIDTH - 1 ][ i ] = DRAWSYMBOL;
	}

	if ( Name.size() >= ( CARDWIDTH - 2 ) )
	{
		for ( int i = 0; i < ( CARDWIDTH - 2 ); i++ )
		{
			card[ i + 1 ][ 1 ] = Name[ i ];
		}
	} else
	{
		for ( int i = ( ( CARDWIDTH - 2 ) - Name.size() ), j = 0; i <= Name.size(); i++, j++ )
		{
			card[ i + 1 ][ 1 ] = Name[ j ];
		}
		
	}
}

std::string Card::getName() const
{
	return Name;
}

std::string Card::getDescription() const
{
	return Description;
}

char Card::getPoint( int x, int y )
{
	return card[ x ][ y ];
}

std::string Card::draw()
{
	std::stringstream str;
	for ( int y = 0; y < CARDHEIGHT; y++ )
	{
		for ( int x = 0; x < CARDWIDTH; x++ )
		{
			str << card[ x ][ y ];
		}
		str << std::endl;
	}
	return str.str();
}
