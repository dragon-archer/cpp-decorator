/**
 * @file    src/utility.h
 * @author  dragon-archer (dragon-archer@outlook.com)
 * @brief 
 * @version 0.0.1
 * 
 * @license This file is published under The MIT License
 *          See License in the root directory for details
 *          Copyright (c) 2020 dragon-archer
 */

#ifndef _CPPDECORATOR_UTILITY_H
#define _CPPDECORATOR_UTILITY_H 1

#ifdef _MSC_VER
#pragma once
#endif /* _MSC_VER */

#include <pch.h>

/**
 * @brief Print usage
 * @param progname The name of the program (aka argv[0])
 */
void print_usage(const char* progname);

/**
 * @brief Decorate `function`
 * 
 * @param function the function declartion
 * @return true   no error occured, decorated function writes back to `function`
 * @return false  some error occured, detailed error writes to `function`
 */
bool decorate(string& function);

/**
 * @brief Undecorate `function`
 * 
 * @param function the function declartion
 * @return true   no error occured, undecorated function writes back to `function`
 * @return false  some error occured, detailed error writes to `function`
 */
bool undecorate(string& function);

#endif /* _CPPDECORATOR_UTILITY_H */
