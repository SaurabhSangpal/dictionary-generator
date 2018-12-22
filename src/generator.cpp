#include "generator.hpp"


std::vector<std::string> generator(std::vector<std::string>& x)
{
	std::vector<std::string> output;
	std::sort(x.begin(), x.end());
	for (int i = 0; i < x.size(); i++) {
		do 
		{
			output.push_back(std::accumulate(x.begin(),
			x.end() - i, std::string()));
		} while (std::next_permutation(x.begin(), x.end()));
	}
	return output;
}
