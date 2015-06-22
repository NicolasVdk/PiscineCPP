#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <string>
# include <iostream>

class ZombieEvent
{
	public:

		ZombieEvent();
		~ZombieEvent();
		void setZombieType ( std::string t);
		Zombie* newZombie( std::string name );
		Zombie* randomChump( void );

	private:

		std::string type;
};

#endif
