#include "Fixed.hpp"

/* constructeur */

Fixed::Fixed( void ) : _fix(0.0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( float const n ) {
	std::cout << "Float constructor called" << std::endl;
	this->_fix = n * (float)(1 << this->_stat);
	return ;
}

Fixed::Fixed( int const n) {
	std::cout << "Int constructor called" << std::endl;
	this->_fix = (n * (1 << this->_stat));
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

/* Operateur */

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed&Fixed::operator=( Fixed const & rhs ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_fix = rhs.getRawBits();
	return (*this);
}



float	Fixed::toFloat( void ) const
{
	return ((float)this->_fix / (float)(1 << this->_stat));
}

int		Fixed::toInt( void ) const
{
	return (this->_fix / (1 << this->_stat));
}

/* Destructeur */

Fixed::~Fixed( void ){
	std::cout << "Destructor called" << std::endl;
}

/* Get / Set */

int		Fixed::getRawBits( void ) const {
	return (this->_fix);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fix = raw;
	return ;
}
