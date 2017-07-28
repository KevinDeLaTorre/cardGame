#include "Card.h"

Card::Card()
	: Name( "NULL" ), Description( "NULL" )
{}

Card::Card( std::string name, std::string desc )
	: Name( name ), Description( desc )
{}

std::string Card::getName() const
{
	return Name;
}

std::string Card::getDescription() const
{
	return Description;
}
