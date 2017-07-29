#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "Constants.h"
#include "Drawings.h"
#include "Card.h"
#include "Board.h"
#include <iostream>
#include <string>

class Graphics
{
	private:
		Board board;
	public:
		// Constructor
		Graphics();

		// Essentials
		drawBoard();
		drawCard( Card card, int x, int y );

		// Shapes
		//drawStar();
		//drawHeart();
		//filledHeart( double percentage );
};


#endif
