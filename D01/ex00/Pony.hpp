#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>

class Pony {

std::string name;
std::string color;
int			cute;

public:

	Pony( std::string n, std::string c, int b );
	~Pony( void );
};

#endif