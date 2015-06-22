#include "FragTrap.hpp"

int		main( void )
{
	FragTrap* robot = new FragTrap("ClapTrap");

	robot->rangedAttack("Bobby");
	robot->meleeAttack("Bobby");
	robot->takeDamage(60);
	robot->takeDamage(30);
	robot->vaulthunter_dot_exe("Bobby");
	robot->takeDamage(20);
	robot->beRepaired(101);
	robot->vaulthunter_dot_exe("Bobby");
	robot->vaulthunter_dot_exe("Bobby");
	robot->vaulthunter_dot_exe("Bobby");
	robot->vaulthunter_dot_exe("Bobby");
	robot->takeDamage(150);

	delete robot;
}