#ifndef CARD_H
#define CARD_H

#include <string>
#include <iostream>

class Card
{
	private:
		std::string Name;
		std::string Description;

	public:
		Card();
		Card( std::string Name, std::string Description );

		std::string str() {
			std::string card = "Name: " + Name + "\nDescription: " + Description;
			return card;
		}

		std::string getName() const;
		std::string getDescription() const;
		
		std::ostream& operator<< (Card& obj) {
			return std::cout << obj.str();
		}

};

#endif
