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
		Card( std::string Name, std::string Description );

		std::string toString() {
			std::string card = "**************";
			card += "\n*            *";
			card += "\n*            *";
			card += "\n*" + Name + "*";
			card += "\n*            *";
			card += "\n*            *";
			card += "\n*            *";
			return card;
		}
		
		std::ostream& operator<< (Card& obj) {
			return std::cout << obj.toString();
		}

};

#endif
