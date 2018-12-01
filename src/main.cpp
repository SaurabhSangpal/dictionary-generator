#include "default.hpp"
#include "generator.hpp"
#include "inputfile.hpp"

int main(int argc, char* argv[]) {
	/*std::cout << argc << std::endl;
	std::vector<std::string> input;
	no_input(input);
	std::vector<std::string> output;
	output = generator(input);
	for (auto i : output) {
		std::cout << i << std::endl;
	}*/

	std::vector<std::string> input;
	std::vector<std::string> output;
	switch (argc) {
	case 1:
		no_input(input);
		output = generator(input);
		break;
	case 2:
		arg parse;
		parse.open_file(argv[argc-1]);
		input = parse.read_file();
		parse.close_file();
		output = generator(input);
		break;
	}
	for (auto i : output) {
		std::cout << i << std::endl;
	}
	return 0;
}