#include "Brain.hpp"
#include "Human.hpp"

Human::Human( void ) {
}

Brain & Human::getBrain( void ) {
	return (this->_brain);
}

std::string Human::identify( void ) {

	std::stringstream ret;
	ret << &this->_brain;
	return (ret.str());
}

Human::~Human( void ) {

}