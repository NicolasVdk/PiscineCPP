#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string n);
		~HumanB();
		void	attack( void );
		void	setWeapon( Weapon& n );

	private:
		Weapon*		_weapon;
		std::string _name;
};

#endif