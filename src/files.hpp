#pragma once

/*
** Opens and reads the input file if it is specified by the user in the
** command line arguments.
*/
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

class arg
{
private:
	std::ifstream input_file;
	std::ofstream output_file;
public:
	void open_input_file(const char* x);
	void close_input_file();
	void open_output_file(const char* x);
	void close_output_file();
	std::vector<std::string> read_file();
	void write_to_out(std::string& x);
};