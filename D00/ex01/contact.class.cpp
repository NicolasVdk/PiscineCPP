#include "contact.class.hpp"

contact::contact( void ) {

	return ;
}

void	contact::first_name( std::string s ) {

	this->fn = s;
	return ;
}

void	contact::last_name( std::string s ) {

	this->ln = s;
	return ;
}

void	contact::nickname( std::string s ) {

	this->nk = s;
	return ;
}

void	contact::login( std::string s ) {

	this->lo = s;
	return ;
}

void	contact::postal_address( std::string s ) {

	this->pa = s;
	return ;
}

void	contact::email_address( std::string s ) {

	this->ea = s;
	return ;
}

void	contact::phone_number( std::string s ) {

	this->pn = s;
	return ;
}

void	contact::birthday_date( std::string s ) {

	this->bd = s;
	return ;
}

void	contact::favorite_meal( std::string s ) {

	this->fm = s;
	return ;
}

void	contact::underwear_color( std::string s ) {

	this->uc = s;
	return ;
}

void	contact::darkest_secret( std::string s ) {

	this->ds = s;
	return ;
}

contact::~contact( void ) {

	return ;
}