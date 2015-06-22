#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n )
{
	this->_horde = new Zombie[n];
	this->_nb_zb = n;
	announce();
}

void ZombieHorde::announce ( void )
{
	for (int i = 0; i < this->_nb_zb; ++i)
		_horde[i].announce();
}

ZombieHorde::~ZombieHorde( void )
{
	delete [] this->_horde;
}