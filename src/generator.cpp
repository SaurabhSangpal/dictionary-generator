#include "generator.hpp"

std::vector<std::string> generator(std::vector<std::string>& x)
{
	std::vector<std::string> output;
	std::string tmp;
	for (auto i : x) {
		output.push_back(i);
		for (auto j : x) {
			tmp = i + j;
			output.push_back(tmp);
			for (auto k : x) {
				tmp = i + j + k;
				output.push_back(tmp);
			}
		}
	}
	return output;
}
