#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap( std::string n ) : ClapTrap(n) {
	std::cout << "Ninja !" << std::endl;
	this->_hp = 60;
	this->_max_hp = 60;
	this->_ep = 120;
	this->_max_ep = 120;
	this->_level = 1;
	this->_melee_damage = 60;
	this->_ranged_damage = 5;
	this->_armor = 0;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	*this = src;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_max_hp = rhs._max_hp;
	this->_ep = rhs._ep;
	this->_max_ep = rhs._max_ep;
	this->_level = rhs._level;
	this->_melee_damage = rhs._melee_damage;
	this->_ranged_damage = rhs._ranged_damage;
	this->_armor = rhs._armor;
	return (*this);
}

void NinjaTrap::ninjaShoebox( ClapTrap const & src ) const {
	std::cout << this->_name << " Play to Pierre feuille ciseaux with " << src.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox( FragTrap & src ) const {
	std::cout << this->_name << " cut the carotide of " << src.getName() << std::endl;
	src.takeDamage(this->_melee_damage);
}

void NinjaTrap::ninjaShoebox( ScavTrap & src ) const {
	std::cout << this->_name << " Jump and kick " << src.getName() << std::endl;
	src.takeDamage(this->_melee_damage);
}

void NinjaTrap::ninjaShoebox( NinjaTrap & src ) const {
	std::cout << this->_name << " see " << src.getName() << " and heal him" << std::endl;
	src.beRepaired( 20 );
}

NinjaTrap::~NinjaTrap( void ) {
	std::cout << "A ninja never really die ..." << std::endl;
}