#include "Fixed.hpp"

/* constructeur */

Fixed::Fixed( void ) : _fix(0.0) {
	/* std::cout << "Default constructor called" << std::endl; */
	return ;
}

Fixed::Fixed( float const n ) {
	/* std::cout << "Float constructor called" << std::endl;*/
	this->_fix = n * (float)(1 << this->_stat);
	return ;
}

Fixed::Fixed( int const n) {
	/* std::cout << "Int constructor called" << std::endl; */
	this->_fix = (n * (1 << this->_stat));
	return ;
}

Fixed::Fixed( Fixed const & src ) {
	/* std::cout << "Copy constructor called" << std::endl; */
	*this = src;
	return ;
}

/* Operateur */

std::ostream & operator<<( std::ostream & o, Fixed const & rhs) {
	o << rhs.toFloat();
	return o;
}

Fixed&Fixed::operator=( Fixed const & rhs ) {
	/* std::cout << "Assignation operator called" << std::endl; */
	this->_fix = rhs.getRawBits();
	return (*this);
}

Fixed&Fixed::operator+( Fixed const & rhs ) {
	this->setRawBits(this->getRawBits() + rhs._fix);
	return (*this);
}

Fixed&Fixed::operator-( Fixed const & rhs ) {
	this->setRawBits(this->getRawBits() - rhs._fix);
	return (*this);
}

Fixed&Fixed::operator*( Fixed const & rhs ) {
	this->setRawBits(toFloat() * rhs.toFloat() * float(1 << this->_stat));
	return (*this);
}

Fixed&Fixed::operator/( Fixed const & rhs ) {
	this->setRawBits(toFloat() / rhs.toFloat() * float(1 << this->_stat));
	return (*this);
}

bool	Fixed::operator>( Fixed const & rhs ) const {
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator>=( Fixed const & rhs ) const {
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<( Fixed const & rhs ) const {
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator<=( Fixed const & rhs ) const {
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( Fixed const & rhs ) const {
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( Fixed const & rhs ) const {
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed & Fixed::operator++( void )
{
	this->_fix = this->toFloat() * (1 << this->_stat) + 1;
	return (*this);
}

Fixed & Fixed::operator--( void )
{
	this->_fix = this->toFloat() * (1 << this->_stat) - 1;
	return (*this);
}

Fixed Fixed::operator++( int )
{
	Fixed tmp = *this;

	++*this;
	return (tmp);
}

Fixed Fixed::operator--( int )
{
	Fixed tmp = *this;

	--*this;
	return (tmp);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	return ((a < b) ? a : b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	return ((a > b) ? a : b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
	return ((a < b) ? a : b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
	return ((a > b) ? a : b);
}


/* Module */

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
	/* std::cout << "Destructor called" << std::endl; */
}

/* Get / Set */

int		Fixed::getRawBits( void ) const {
	return (this->_fix);
}

void	Fixed::setRawBits( int const raw ) {
	this->_fix = raw;
	return ;
}
