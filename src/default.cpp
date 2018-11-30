#include "default.hpp"

void no_input(std::vector<std::string>& x)
{
	std::string tmp;
	while (std::cin >> tmp) {
		if (tmp != "-q") {
			x.push_back(tmp);
		} 
		else {
			break;
		}
	}
}