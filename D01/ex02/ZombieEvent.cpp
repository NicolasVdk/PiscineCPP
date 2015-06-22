#include <array>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent ( void ) : type("Fast") {

}

void ZombieEvent::setZombieType ( std::string t) {
	this->type = t;
}

Zombie* ZombieEvent::newZombie( std::string name ) {
	return (new Zombie(name, this->type));
}

Zombie* ZombieEvent::randomChump( void ) {
	int	random = rand() % 10;
	std::array<std::string, 10> rn = { {std::string("bob"), "carlo", "robert", "frank", "portos", "estelle", "claire", "Taihitibob", "Malaki", "Aladdin"} };
	return (newZombie(rn[random]));
}

ZombieEvent::~ZombieEvent ( void ) {

}