#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "annuaire.class.hpp"

annuaire::annuaire( void ) : actual( 0 ) {

	return ;
}

void	annuaire::add( void ) {
	
	if (actual < 8)
	{
		std::cout << "First name : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].first_name(buffer);

		std::cout << "Last name : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].last_name(buffer);

		std::cout << "Nickname : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].nickname(buffer);

		std::cout << "Login : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].login(buffer);

		std::cout << "Postal address : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].postal_address(buffer);

		std::cout << "Email address : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].email_address(buffer);

		std::cout << "Phone number : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].phone_number(buffer);

		std::cout << "Birthday date : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].birthday_date(buffer);

		std::cout << "Favorite meal : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].favorite_meal(buffer);

		std::cout << "Underwear color : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].underwear_color(buffer);

		std::cout << "Darkest secret : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		list[actual].darkest_secret(buffer);

		actual++;
	}
	else
		std::cerr << "Too Much Entry" << std::endl;
	return ;
}

std::string	annuaire::extend_search ( std::string s ) {

	if (s.size() < 11)
		return (s);
	else
	{
		std::string s2 = s.substr(0, 10);
		s2.replace(s2.end() - 1, s2.end(), ".");
		return (s2);
	}
}

void	annuaire::specsearch ( int id ) {

	std::cout << "First name : " << list[id].fn << std::endl;
	std::cout << "Last name : " << list[id].ln << std::endl;
	std::cout << "Nickname : " << list[id].nk << std::endl;
	std::cout << "Login : " << list[id].lo << std::endl;
	std::cout << "Postal address : " << list[id].pa << std::endl;
	std::cout << "Email address : " << list[id].ea << std::endl;
	std::cout << "Phone number : " << list[id].pn << std::endl;
	std::cout << "Birthday day : " << list[id].bd << std::endl;
	std::cout << "Favorite meal : " << list[id].fm << std::endl;
	std::cout << "Underwear color : " << list[id].uc << std::endl;
	std::cout << "Darkest secret : " << list[id].ds << std::endl;
}

void	annuaire::search ( void ) {

	this->i = 0;

	if (actual > 0)
	{
		while (this->i < actual)
		{
			std::cout << "|" << std::setw(10) << i << "|" << std::setw(10) << extend_search(list[i].fn) << "|" << std::setw(10) << extend_search(list[i].ln) << "|" << std::setw(10) << extend_search(list[i].nk) << "|" << std::endl;
			i++;
		}
		std::cout << "Enter ID : ";
		if (getline(std::cin, buffer) == 0)
			exit(0);
		std::string answer (buffer);
		int aw = std::stoi (answer);
		if (aw >= 0 && aw < actual)
			specsearch(aw);
		else
			std::cerr << "Bad Entry" << std::endl;
	}
	else
		std::cerr << "Empty" << std::endl;
	return ;
}

annuaire::~annuaire( void ) {

	return ;
}