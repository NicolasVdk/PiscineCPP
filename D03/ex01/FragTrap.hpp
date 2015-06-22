#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include <array>

class FragTrap
{
	public:
		FragTrap( std::string n );
		FragTrap( FragTrap const &  src);
		~FragTrap();

		FragTrap & operator=( FragTrap const & rhs );
		void	rangedAttack( std::string const & target );
		void	meleeAttack( std::string const & target );
		void	vaulthunter_dot_exe( std::string const & target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);

	private:
		void	_spell( unsigned int spell, std::string const & target );

		std::string     _name;
		int				_hp;
		int				_max_hp;
		int				_ep;
		unsigned int	_max_ep;
		unsigned int	_level;
		unsigned int	_melee_damage;
		unsigned int	_ranged_damage;
		unsigned int	_armor;
		unsigned int	_damage_cem;
		unsigned int	_damage_hyp;

};

#endif
