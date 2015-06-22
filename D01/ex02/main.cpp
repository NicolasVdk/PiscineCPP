#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int		main( void )
{
	ZombieEvent instance;
	Zombie* zombie[10];

	for (int i = 0; i < 10; ++i)
	{
		if (i == 5)
			instance.setZombieType("Slow");
		zombie[i] = instance.randomChump();
	}
	for (int i = 0; i < 10; ++i)
	{
		delete zombie[i];
	}
}