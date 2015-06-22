#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <array>

class ScavTrap : public ClapTrap
{

	public:
		ScavTrap( std::string n );
		ScavTrap( ScavTrap const &  src);
		~ScavTrap();

		ScavTrap & operator=( ScavTrap const & rhs );
		void	challengeNewcomer( std::string const & target );

};

#endif