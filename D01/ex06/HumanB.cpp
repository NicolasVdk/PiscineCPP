#include "HumanB.hpp"

HumanB::HumanB (std::string n) {
	this->_name = n;
}

void HumanB::attack (void) {
	std::cout << this->_name << " use " <<  this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon ( Weapon& n ) {
	this->_weapon = &n;
}

HumanB::~HumanB (void) {

}