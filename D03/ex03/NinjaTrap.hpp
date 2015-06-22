#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>
# include <array>

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap( std::string n );
		NinjaTrap( NinjaTrap const & src );
		void ninjaShoebox( ClapTrap const & src ) const;
		void ninjaShoebox( FragTrap & src ) const;
		void ninjaShoebox( ScavTrap & src ) const;
		void ninjaShoebox( NinjaTrap & src ) const;
		~NinjaTrap();
		NinjaTrap & operator=(NinjaTrap const & rhs);
};

#endif