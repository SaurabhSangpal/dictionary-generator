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
public:
	void open_file(const char* x);
	void close_file();
	std::vector<std::string> read_file();
};