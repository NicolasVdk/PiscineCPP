#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>
#include <iostream>

class Weapon
{
	public:
		Weapon( std::string arm );
		~Weapon( void );

		void		setType( std::string arm );
		std::string getType( void );

	private:
		std::string _type;

};

#endif