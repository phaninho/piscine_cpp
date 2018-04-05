#include "ConvertStr.hpp"
#include <iostream>

int main(int ac, char **av)
{

	if (ac != 2)
		return 1;
	ConvertStr conv(av[1]);

	std::cout << "char : " << conv.getInChar() << std::endl;
	std::cout << "int : " << conv.getInInt() << std::endl;
	std::cout << "float : " << conv.getInFloat() << std::endl;
	std::cout << "double : " << conv.getInDouble() << std::endl;
	
	return 0;
}
