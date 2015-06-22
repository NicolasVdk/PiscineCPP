#include <string>
#include <fstream>
#include <iostream>

int		main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream ifs(av[1]);
		std::string buffer;
		std::string all;
		while (getline(ifs, buffer)) {
				all += buffer + "\n";
		}
		std::string name(av[1]);
		std::string search(av[2]);
		std::string rep(av[3]);
		while (all.find(search) != std::string::npos)
			all.replace(all.find(search), search.size(), rep);
		std::ofstream ofs(name + ".replace");
		ofs << all;
	}
	else
		std::cerr << "Bad entry" << std::endl;
	return (0);
}
