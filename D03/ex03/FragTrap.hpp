#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <array>

class FragTrap : public ClapTrap
{
	public:
		FragTrap( std::string n );
		FragTrap( FragTrap const &  src);
		~FragTrap();

		FragTrap & operator=( FragTrap const & rhs );
		void	vaulthunter_dot_exe( std::string const & target );

	private:
		void	_spell( unsigned int spell, std::string const & target );

		unsigned int	_damage_cem;
		unsigned int	_damage_hyp;
};

#endif