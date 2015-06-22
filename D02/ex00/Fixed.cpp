#include "Fixed.hpp"

Fixed::Fixed( void ) : _fix(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( int const n ) {
	return ;
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fix = raw;
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed&Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fix = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}