#include "Brain.hpp"

Brain::Brain( void )
{

}

std::string Brain::identify( void )
{
	std::stringstream ret;
	ret << this;
	return (ret.str());
}

Brain::~Brain( void )
{

}