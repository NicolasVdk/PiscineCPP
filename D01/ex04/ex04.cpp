#include <iostream>

int		main( void )
{
	std::string text ("HI THIS IS BRAIN");
	std::string* textPtr = &text;
	std::string& textRef = text;
	std::cout << *textPtr << std::endl;
	std::cout << textRef << std::endl;
}