#include "FragTrap.hpp"

FragTrap::FragTrap( std::string n ) : ClapTrap(n) {
	std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!" << std::endl;
	this->_hp = 100;
	this->_max_hp = 100;
	this->_ep = 100;
	this->_max_ep = 100;
	this->_level = 1;
	this->_melee_damage = 30;
	this->_ranged_damage = 20;
	this->_armor = 5;
	this->_damage_cem = 60;
	this->_damage_hyp = 1000;
}

FragTrap::FragTrap( FragTrap const & src ) {
	*this = src;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
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
	this->_damage_cem = rhs._damage_cem;
	this->_damage_hyp = rhs._damage_hyp;
	return (*this);
}

void	FragTrap::_spell( unsigned int spell , std::string const & target)
{
	if (spell <= 1)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with Cryogenic Exhaust Manifold, and causing " << this->_damage_cem << " points of damage and freezing !" << std::endl;
		int	random1 = rand() % 4;
		std::array<std::string, 4> rn1 = { {std::string("Coolant, vented!"), "Welcome to the Jam!", "Ah... Much better!", "Smells like Pina Coladas!"} };
		std::cout << "Joke : " << rn1[random1] << std::endl;
	}
	else if (spell == 2)
	{
		std::cout << "FR4G-TP " << this->_name << " attacks " << target << " with Hyperion Punch, and causing " << this->_damage_hyp << " points of damage !" << std::endl;
		int	random2 = rand() % 3;
		std::array<std::string, 3> rn2 = { {std::string("Hyperiooooon Punch!"), "YES!", "Show me what you got" } };
		std::cout << "Joke : " << rn2[random2] << std::endl;
	}
	else if (spell == 3)
	{
		std::cout << "FR4G-TP " << this->_name << " float like a bee !" << std::endl;
		int	random3 = rand() % 3;
		std::array<std::string, 3> rn3 = { {std::string("Gloves are coming off!"), "One, two punch", "Sting like a butterfly!" } };
		std::cout << "Joke : " << rn3[random3] << std::endl;
	}
	else if (spell == 4)
	{	
		std::cout << "FR4G-TP " << this->_name << " use Repulsive !" << std::endl;
		int	random4 = rand() % 3;
		std::array<std::string, 3> rn4 = { {std::string("Get away from me!"), "Eww, get away!", "Do I smell funny?" } };
		std::cout << "Joke : " << rn4[random4] << std::endl;
	}
	else if (spell == 5)
	{
		std::cout << "FR4G-TP " << this->_name << " use HIGH FIVES GUYS !" << std::endl;
		int	random5 = rand() % 3;
		std::array<std::string, 3> rn5 = { {std::string("Secret handshake!"), "Still counts!", "I feel like an idiot now." } };
		std::cout << "Joke : " << rn5[random5] << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if (this->_ep >= 25)
	{
		this->_ep -= 25;
		this->_spell(rand() % 5, target);
		std::cout << "[ " << this->_ep << " energy points ]" << std::endl;
	}
	else
		std::cout << "Out of energy points" << std::endl;

}

FragTrap::~FragTrap( void )
{
	std::cout << "I'm death ?" << std::endl;
}
