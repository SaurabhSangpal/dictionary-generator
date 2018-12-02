#include "default.hpp"
#include "generator.hpp"
#include "files.hpp"

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
	{
		arg file;
		file.open_input_file(argv[argc-1]);
		input = file.read_file();
		file.close_input_file();
		output = generator(input);
		for (auto i : output)
			std::cout << i << std::endl;
		break;
	}
	case 3:
	{
		arg file;
		file.open_input_file(argv[argc-2]);
		input = file.read_file();
		file.close_input_file();
		output = generator(input);
		file.open_output_file(argv[argc-1]);
		for (auto i : output) 
			file.write_to_out(i);
		file.close_output_file();
		break;
	}
	}
	return 0;
}