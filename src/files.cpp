#include "files.hpp"

void arg::open_input_file(const char* x)
{
	try {
		input_file.open(x);
		if (input_file.fail())
			throw "Failed to open file!";
		if (input_file.peek() == std::ifstream::traits_type::eof()) 
			throw "File is empty!";
	}
	catch (const char* esc) {
		std::cerr << "Error: " << esc << std::endl;
	}
}

void arg::close_input_file()
{
	if (input_file.is_open())
		input_file.close();
	input_file.clear();
}

void arg::open_output_file(const char* x)
{
	try {
		output_file.open(x, std::fstream::app);
		if (output_file.fail()) {
			throw "Failed to open file!";
		}
	}
	catch (const char* esc) {
		std::cerr << "Error: " << esc << std::endl;
	}
}

void arg::close_output_file()
{
	if (output_file.is_open())
		output_file.close();
	output_file.clear();
}

std::vector<std::string> arg::read_file()
{
	std::string* tmp = new std::string;
	std::vector<std::string> tmp_vec;
	if (!input_file.is_open()) {
		std::cerr << "Input file is not open! Cannot read the file!\n";
	} else {
		while (input_file >> *tmp) {
			tmp_vec.push_back(*tmp);
		}
	}
	delete tmp;
	return tmp_vec;
}

void arg::write_to_out(std::string& x)
{
	output_file << x << std::endl;
}