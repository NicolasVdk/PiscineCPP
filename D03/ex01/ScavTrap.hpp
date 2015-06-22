#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <array>

class ScavTrap
{
	public:
		ScavTrap( std::string n );
		ScavTrap( ScavTrap const &  src);
		~ScavTrap();

		ScavTrap & operator=( ScavTrap const & rhs );
		void	rangedAttack( std::string const & target );
		void	meleeAttack( std::string const & target );
		void	challengeNewcomer( std::string const & target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);

	private:
		std::string     _name;
		int				_hp;
		int				_max_hp;
		int				_ep;
		unsigned int	_max_ep;
		unsigned int	_level;
		unsigned int	_melee_damage;
		unsigned int	_ranged_damage;
		unsigned int	_armor;

};

#endif
