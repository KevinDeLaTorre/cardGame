#include "Game.h"

Game::Game()
{
	return;
}

Game::~Game()
{}

int Game::operator()()
{
	Graphics GEngine;
	Card card1( "Fire Queen", "Spits mad flames" );
	Card card2( "Water Queen", "Spits mad flames" );
	Card card3( "Earth Queen", "Spits mad flames" );
	Card card4( "Neutral Queen", "Spits mad flames" );
	Card card5( "Windy Queen", "Spits mad flames" );
	GEngine.drawCard( card1, 2, 1 );
	GEngine.drawCard( card2, 17, 1 );
	GEngine.drawCard( card3, 32, 1 );
	GEngine.drawCard( card4, 47, 1 );
	GEngine.drawCard( card5, 62, 1 );
	GEngine.drawBoard();
	return 1;
}
