#include <iostream>
#include <string>
#include "annuaire.class.hpp"

int		main()
{
	annuaire instance;
	std::string str;

	while (1)
	{
		std::cout << "$> ";
		if (getline(std::cin, str) == 0)
			break ;
		if (str.compare("EXIT") == 0)
			break ;
		else if (str.compare("ADD") == 0)
			instance.add();
		else if (str.compare("SEARCH") == 0)
			instance.search();
		else
			std::cerr << "ERROR" << std::endl;
	}
	return (0);
}