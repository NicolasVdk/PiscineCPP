#include "ScavTrap.hpp"

ScavTrap::ScavTrap( std::string n ) : _name(n), _hp( 100 ), _max_hp( 100 ), _ep( 50 ), _max_ep( 50 ), _level( 1 ), _melee_damage( 20 ), _ranged_damage( 15 ), _armor( 3 ) {
	std::cout << "Hi your Highness." << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	*this = src;
	return ;
}

ScavTrap&ScavTrap::operator=( ScavTrap const & rhs ) {
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

void	ScavTrap::rangedAttack( std::string const & target ) {

	std::cout << "FR5G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_damage << " points of damage !" << std::endl;
	srand(time(NULL) + this->_ranged_damage);
	int	random = rand() % 3;
	std::array<std::string, 3> rn = { {std::string("Take that!"), "Bop!", "Hyah!"} };
	std::cout << "Joke : " << rn[random] << std::endl;

}

void	ScavTrap::meleeAttack( std::string const & target ) {

	std::cout << "FR5G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_damage << " points of damage !" << std::endl;
	srand(time(NULL) + this->_melee_damage);
	int	random = rand() % 3;
	std::array<std::string, 3> rn = { {std::string("Take that!"), "Bop!", "Hyah!"} };
	std::cout << "Joke : " << rn[random] << std::endl;

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

void	ScavTrap::takeDamage( unsigned int amount) {

	if (amount > this->_armor)
		this->_hp -= (amount - this->_armor);
	if (this->_hp < 0)
	{
		this->_hp = 0;
		std::cout << "Joke : " << "My life very very very very low :(" << std::endl;
	}
	else if (this->_hp < 30)
	{
		std::cout << "Joke : " << "I need safety" << std::endl;
	}
	else
	{
		std::cout << "Joke : " << "I take damage HELPPPPP" << std::endl;
	}
	std::cout << "HP amount : " << this->_hp << std::endl;
}

void	ScavTrap::beRepaired( unsigned int amount) {

	this->_hp += amount;
	if (this->_hp > this->_max_hp)
		this->_hp = this->_max_hp;
	std::cout << "Joke : " << "Finally." << std::endl;
	std::cout << "HP amount : " << this->_hp << std::endl;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "I see 6 7 ennemies is for that no for others reason in link of my faculty of fight." << std::endl;
}
