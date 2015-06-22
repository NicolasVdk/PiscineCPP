#include <algorithm>
#include <iostream>
#include <string>

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			std::string str = argv[i];
			std::transform(str.begin(), str.end(), str.begin(), ::toupper);
			std::cout << str;
			i++;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
}