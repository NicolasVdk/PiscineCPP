#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde
{

	public:
		ZombieHorde( int n );
		~ZombieHorde();
		void announce( void );
	
	private:
		Zombie* _horde;
		int		_nb_zb;
};

#endif