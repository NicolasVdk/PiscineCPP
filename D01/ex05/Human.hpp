#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <iostream>
# include <string>
# include <sstream> 

class Human
{
	public:
		Human();
		~Human();
		std::string identify( void );
		Brain & getBrain( void );

	private:
		Brain _brain;
};

#endif