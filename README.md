# dictionary-generator

Simple C++ program that generates a dictionary to perform dictionary attacks.

![Travis-CI](https://travis-ci.org/saurabhsangpal/dictionary-generator.svg?branch=master)

[![Codacy Badge](https://api.codacy.com/project/badge/Grade/cdd59c1a614a4c4aac80099c0786eda4)](https://app.codacy.com/app/saurabhsangpal/dictionary-generator?utm_source=github.com&utm_medium=referral&utm_content=saurabhsangpal/dictionary-generator&utm_campaign=Badge_Grade_Dashboard)

## Prerequisites

[CMake](https://cmake.org)

A C++ Compiler.

[GCC](https://gnu.org/software/gcc)

## Installation Instructions

	mkdir bin
	cd bin
	cmake -DCMAKE_BUILD_TYPE=Release ..
	make

You can call the program using

	./dictionary-generator
