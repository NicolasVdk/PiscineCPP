#include "HumanA.hpp"

HumanA::HumanA (std::string n, Weapon & w) : _weapon(w), _name(n) {

}

void HumanA::attack (void) {
	std::cout << this->_name << " use " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA (void) {

}