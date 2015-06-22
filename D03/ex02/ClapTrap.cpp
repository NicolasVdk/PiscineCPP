#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name( "NoName" ) {
	std::cout << "ClapTrap in construct ! " << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor = 5;
}

ClapTrap::ClapTrap( std::string n ) : _name( n ) {
	std::cout << "ClapTrap in construct ! " << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor = 5;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	*this = src;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) {
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

void	ClapTrap::rangedAttack( std::string const & target ) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_damage << " points of damage !" << std::endl;
	srand(time(NULL) + this->_ranged_damage);
	int	random = rand() % 3;
	std::array<std::string, 3> rn = { {std::string("Take that!"), "Bop!", "Hyah!"} };
	std::cout << "Joke : " << rn[random] << std::endl;

}

void	ClapTrap::meleeAttack( std::string const & target ) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_damage << " points of damage !" << std::endl;
	srand(time(NULL) + this->_melee_damage);
	int	random = rand() % 3;
	std::array<std::string, 3> rn = { {std::string("Take that!"), "Bop!", "Hyah!"} };
	std::cout << "Joke : " << rn[random] << std::endl;

}

void	ClapTrap::takeDamage( unsigned int amount) {

	if (amount > this->_armor)
		this->_hp -= (amount - this->_armor);
	if (this->_hp < 0)
	{
		this->_hp = 0;
		std::cout << "Joke : " << "I am Death!" << std::endl;
	}
	else if (this->_hp < 30)
	{
		std::cout << "Joke : " << "Health! Ooh, what flavor is red?" << std::endl;
	}
	else
	{
		std::cout << "Joke : " << "Why did they build me out of galvanised flesh?!" << std::endl;
	}
	std::cout << "HP amount : " << this->_hp << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount) {

	this->_hp += amount;
	if (this->_hp > this->_max_hp)
		this->_hp = this->_max_hp;
	std::cout << "Joke : " << "Like New!" << std::endl;
	std::cout << "HP amount : " << this->_hp << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap Destructed." << std::endl;
}