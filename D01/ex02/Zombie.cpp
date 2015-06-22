#include "Zombie.hpp"

Zombie::Zombie ( std::string n, std::string t ) {
	this->name = n;
	this->typez = t;
	announce();
}

void Zombie::announce ( void ) {
	std::cout << "<" << this->name << "(" << this->typez << ")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie ( void ) {
	std::cout << "<" << this->name << "(" << this->typez << ")> Crouiiiiiik" << std::endl;
}