/**
 * @file    src/utility.cpp
 * @author  dragon-archer (dragon-archer@outlook.com)
 * @brief 	The implements of utility functions for the program
 * @version 0.0.1
 * 
 * @license This file is published under The MIT License
 *          See License in the root directory for details
 *          Copyright (c) 2020 dragon-archer
 */

#include <utility.h>

/**
 * @brief Print usage
 * @param progname The name of the program (aka argv[0])
 */
void print_usage(const char* progname)
{
	printf(R"(
Usage: %s <options> <function>

Options:
	-u, --undecorate  Undecorate <function>
	-d, --decorate    Decorate <function>
	-h, --help        Print this help message
Function:
	The function name(decorated or not), 
	it can be quoted, or just "as is".
	Some of the modifiers can be omitted.
	The undecorated function looks like this:
	<declartor> <calling convention> <function name>(<parameters>)

	<declartor>:          required
	<calling convention>: optional, default is __cdecl
	<function name>:      required
	<parameters>:         optional, split with ','
Return value:
	If no error occared, return 0
	If the option is invalid, return 1
	If the funcion is invalid, return 2
	Otherwise, return 3
)", progname);
}
