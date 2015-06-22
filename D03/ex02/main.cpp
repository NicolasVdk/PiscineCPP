#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int		main( void )
{
	FragTrap* robot = new FragTrap("ClapTrap");
	ScavTrap* robote = new ScavTrap("C3PO");
	robot->rangedAttack("C3PO");
	robote->rangedAttack("ClapTrap");
	robot->meleeAttack("C3PO");
	robote->meleeAttack("ClapTrap");
	robot->takeDamage(60);
	robote->takeDamage(60);
	robot->takeDamage(30);
	robote->takeDamage(30);
	ScavTrap* Noobbot = new ScavTrap("C3PO");
	Noobbot = robote;
	Noobbot->takeDamage( 50 );
	robot->vaulthunter_dot_exe("C3PO");
	robote->challengeNewcomer("ClapTrap");
	robot->takeDamage(20);
	robot->beRepaired(101);
	robot->vaulthunter_dot_exe("C3PO");
	robote->challengeNewcomer("ClapTrap");
	robot->vaulthunter_dot_exe("C3PO");
	robote->challengeNewcomer("ClapTrap");
	robot->vaulthunter_dot_exe("C3PO");
	robote->challengeNewcomer("ClapTrap");
	robot->vaulthunter_dot_exe("C3PO");
	robote->challengeNewcomer("ClapTrap");
	robot->takeDamage(150);
	robote->takeDamage(150);

	delete robot;
	delete robote;
}