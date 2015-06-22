#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <array>

class ClapTrap
{
	public:
		ClapTrap( void );
		ClapTrap( std::string n );
		ClapTrap( ClapTrap const & src );
		~ClapTrap();
		ClapTrap & operator=( ClapTrap const & rhs );
		void	rangedAttack( std::string const & target );
		void	meleeAttack( std::string const & target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);
	
	protected:

		int				_hp;
		int				_max_hp;
		int				_ep;
		unsigned int	_max_ep;
		unsigned int	_level;
		unsigned int	_melee_damage;
		unsigned int	_ranged_damage;
		unsigned int	_armor;
		std::string		_name;
};

#endif
