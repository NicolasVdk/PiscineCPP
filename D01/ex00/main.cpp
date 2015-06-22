#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Pony* pony = new Pony("Lore", "Pink", 1);
	delete pony;
}

void	ponyOnTheStack(void)
{
	Pony pony = Pony("Bob", "blue", 0);
}

int		main( void )
{
	ponyOnTheHeap();
	ponyOnTheStack();
}