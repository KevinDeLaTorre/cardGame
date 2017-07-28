#include "Card.h" // Modularize later by just importing a "game" class and inherit the other classes through that

int main() {
	Card card( "NAME HERE", "DESC" );
	std::cout << card.toString();
}
