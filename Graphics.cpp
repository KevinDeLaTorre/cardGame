#include "Graphics.h"

Graphics::Graphics()
	: board()
{}

Graphics::drawBoard()
{
	std::cout << board.draw();
}

Graphics::drawCard( Card card, int x, int y )
{
	for ( int i = 0; i < CARDHEIGHT; i++ )
	{
		for ( int j = 0; j < CARDWIDTH; j++ )
		{
			if ( card.getPoint( j, i ) != ' ' )
			{
				board.drawPoint( ( x + j ), ( y + i ), card.getPoint( j, i ) );
			} else
			{
				board.clearPoint( ( x + j ), ( y + i ) );
			}
		}
	}
}
