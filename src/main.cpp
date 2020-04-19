/**
 * @file    src/main.cpp
 * @author  dragon-archer (dragon-archer@outlook.com)
 * @brief   The entry point of the program
 * @version 0.0.1
 *
 * @license This file is published under The MIT License
 *          See License in the root directory for details
 *          Copyright (c) 2020 dragon-archer
 */

#include <pch.h>
#include <utility.h>

/**
 * @brief  The entry point of the program
 * @param  argc number of arguments passed by cmdline 
 * @param  argv arguments
 * @return int  program status
 */
int main(int argc, char* argv[])
{
	if(argc == 1)
	{
		print_usage(argv[0]);
		return 0;
	}
	return 0;
}
