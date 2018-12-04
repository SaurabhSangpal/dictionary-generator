# dictionary-generator

Simple C++ program that generates a dictionary to perform dictionary attacks.

[![Travis-CI](https://travis-ci.org/saurabhsangpal/dictionary-generator.svg?branch=master)](https://travis-ci.org/saurabhsangpal/dictionary-generator)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/cdd59c1a614a4c4aac80099c0786eda4)](https://app.codacy.com/app/saurabhsangpal/dictionary-generator?utm_source=github.com&utm_medium=referral&utm_content=saurabhsangpal/dictionary-generator&utm_campaign=Badge_Grade_Dashboard)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/saurabhsangpal/dictionary-generator.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/saurabhsangpal/dictionary-generator/context:cpp)
[![GitHub license](https://img.shields.io/github/license/saurabhsangpal/dictionary-generator.svg)](https://github.com/saurabhsangpal/dictionary-generator/blob/master/LICENSE)

## Prerequisites

[CMake](https://cmake.org)

A C++ Compiler.

[GCC](https://gnu.org/software/gcc)

## Installation Instructions

	mkdir bin
	cd bin
	cmake -DCMAKE_BUILD_TYPE=Release ..
	make

## Usage Instructions

You can call the program using

	./dictionary-generator

You can specify a file that contains the input keywords using

	./dictionary-generator <inputfile>

You can also specify an output file using

	./dictionary-generator <inputfile> <outputfile>
