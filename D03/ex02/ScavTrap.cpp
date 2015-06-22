#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n ) : ClapTrap(n) {
	std::cout << "Hi your Highness." << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 50;
	this->_max_ep = 50;
	this->_level = 1;
	this->_melee_damage = 20;
	this->_ranged_damage = 15;
	this->_armor = 3;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	*this = src;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
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

void	ScavTrap::challengeNewcomer( std::string const & target ) {

	int spell = rand() % 5;
	if (spell <= 1)
		std::cout << "FR4G-TP " << this->_name << " challenge " << target << " to Keep longer walk bell"<< std::endl;
	else if (spell == 2)
		std::cout << "FR4G-TP " << this->_name << " challenge " << target << " to say : Les chaussettes de l'archiduchesse sont elle seche archiseche ?" << std::endl;
	else if (spell == 3)
		std::cout << "FR4G-TP " << this->_name << " challenge " << target << " to hitchhiking" << std::endl;
	else if (spell == 4)
		std::cout << "FR4G-TP " << this->_name << " challenge " << target << " to wait 6 hours if i come back" << std::endl;
	else if (spell == 5)
		std::cout << "FR4G-TP " << this->_name << " challenge " << target << " to play at Russian roulette" << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "I see 6 7 ennemies is for that no for others reason in link of my faculty of fight." << std::endl;
}
