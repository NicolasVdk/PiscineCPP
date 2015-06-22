#include "Zombie.hpp"

Zombie::Zombie ( void ) {
	this->_name = _randomChump();
	this->_typez = "Fast";
}

void Zombie::announce ( void ) {
	std::cout << "<" << this->_name << "(" << this->_typez << ")> Braiiiiiiinnnssss..." << std::endl;
}

std::string Zombie::_randomChump( void ) {
	int	random = rand() % 10;
	std::array<std::string, 10> rn = { {std::string("bob"), "carlo", "robert", "frank", "portos", "estelle", "claire", "Taihitibob", "Malaki", "Aladdin"} };
	return (rn[random]);
}

Zombie::~Zombie ( void ) {
	std::cout << "<" << this->_name << "(" << this->_typez << ")> Crouiiiiiik" << std::endl;
}