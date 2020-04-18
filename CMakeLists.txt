##
# @file    CMakeLists.txt
# @author  dragon-archer (dragon-archer@outlook.com)
# @brief   The CMake Configuration file
# @version 0.0.1
#
# @license This file is published under The MIT License
#          See License in the root directory for details
#          Copyright (c) 2020 dragon-archer
#

cmake_minimum_required(VERSION 3.16) # For target_precompiled_header()
project(cpp-decorator
		VERSION     0.0.1
		DESCRIPTION "Show decorated names of C++ functions"
		LANGUAGES   CXX)

set(SRC_DIR src)
aux_source_directory(${SRC_DIR} SRC)

add_executable(decorator ${SRC})
target_precompile_headers(decorator PRIVATE "${SRC_DIR}/pch.h")
target_include_directories(decorator PRIVATE ${SRC_DIR})
