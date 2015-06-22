#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie {

	std::string	name;
	std::string typez;

	public:

		Zombie( std::string n, std::string t );
		~Zombie();
		void announce( void );
	
};

#endif