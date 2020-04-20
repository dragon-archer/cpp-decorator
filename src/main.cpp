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
	vector<string> varg(argv + 1, argv + argc); // vector contains arguments
	int nDecorate = 0; // 1 => decorate; -1 => undecorate; 0 => guess
	string function; // The function name
	// Parse argumets
	for(auto& s : varg)
	{
		if(s[0] == '-') // `s` is option
		{
			/**
			 * @brief Switch options
			 * Switch options by comparing the hash code
			 * @note because switch() DO NOT support
			 *       non-constexpr case (the hash code of
			 *       const string is const but not constexpr)
			 *       so we use if() instead
			 */
			size_t hs = hash<string>()(s); // Store the hash code to accerlate
			if(hs == hash<string>()("-h")
			|| hs == hash<string>()("--help"))
			{
				// Print help message
				print_usage(argv[0]);
				return 0;
			}
			else if(hs == hash<string>()("-d")
		    	 || hs == hash<string>()("--decorate"))
			{
				// Decorate function
				nDecorate = 1;
			}
			else if(hs == hash<string>()("-u")
		    	 || hs == hash<string>()("--undecorate"))
			{
				// Undecorate function
				nDecorate = -1;
			}
			else
			{
				// Unknown option => return 1
				cerr << "Invalid option \"" << s << "\"!\n";
				return 1;
			}
		}
		else // `s` is part of the function
		{
			// Append to `function`
			function += s;
			function += ' ';
		}
	}
	string raw_function = function; // Since the following action change `function`, so backup it
	// Switch action
	switch(nDecorate)
	{
		case 1:
		{
			if(!decorate(function))
			{
				// error occured
				cerr << "Error decorate function \"" << raw_function << "\"\n";
				cerr << function; // Output detail error
				return 2;
			}
			break;
		}
		case -1:
		{
			if(!undecorate(function))
			{
				// error occured
				cerr << "Error undecorate function \"" << raw_function << "\"\n";
				cerr << function; // Output detail error
				return 2;
			}
			break;
		}
		case 0:
		{
			break;
		}
	}
	return 0;
}
