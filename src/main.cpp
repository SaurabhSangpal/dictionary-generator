#include "default.hpp"
#include "generator.hpp"

int main() {
	std::vector<std::string> input;
	no_input(input);
	std::vector<std::string> output;
	output = generator(input);
	for (auto i : output) {
		std::cout << i << std::endl;
	}
	return 0;
}