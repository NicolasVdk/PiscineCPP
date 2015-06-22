#include "Weapon.hpp"

Weapon::Weapon ( std::string arm ) {
	this->_type = arm;
}

void Weapon::setType ( std::string arm ) {
	this->_type = arm;
}

std::string Weapon::getType ( void ) {
	return (this->_type);
}

Weapon::~Weapon ( void ) {

}