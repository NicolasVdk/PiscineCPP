#include "Pony.hpp"

Pony::Pony( std::string n, std::string c, int b ) {
	this->name = n;
	this->color = c;
	this->cute = b;
	std::cout << "A pony " << this->color << " named " << this->name << " is born ";
	if (this->cute == 1)
		std::cout << "and he is cute !" << std::endl;
	else
		std::cout << "but he is not cute :(" << std::endl;
}

Pony::~Pony( void ) {
	std::cout << this->name << " is died :(" << std::endl;
}