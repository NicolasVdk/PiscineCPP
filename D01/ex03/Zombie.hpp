#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <array>
# include <string>
# include <iostream>

class Zombie {

	public:

		Zombie( void );
		~Zombie( void );
		void announce( void );
	
	private:

		std::string	_name;
		std::string _typez;
		std::string _randomChump( void );
};

#endif