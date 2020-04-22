/**
 * @file    src/pch.h
 * @author  dragon-archer (dragon-archer@outlook.com)
 * @brief   The precompiled header
 * @version 0.0.1
 * 
 * @license This file is published under The MIT License
 *          See License in the root directory for details
 *          Copyright (c) 2020 dragon-archer
 */

#ifndef _CPPDECORATOR_PCH_H
#define _CPPDECORATOR_PCH_H 1

#ifdef _MSC_VER
#pragma once
#endif /* _MSC_VER */

// Include C++ standard headers
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
using namespace std; /* Simplize the code */

/**
 * Assert macro
 * Used by utility functions
 * @param cond  The condition
 * @param var   The variable to store message
 * @param msg   The error message
 */
#define Assert(cond,var,msg) \
	if(!(cond)) \
	{ \
		var = msg; \
		return false; \
	}

#endif /* _CPPDECORATOR_PCH_H */
