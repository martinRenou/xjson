############################################################################
# Copyright (c) 2019, Martin Renou                                         #
#                                                                          #
# Distributed under the terms of the BSD 3-Clause License.                 #
#                                                                          #
# The full license is in the file LICENSE, distributed with this software. #
############################################################################

cmake_minimum_required(VERSION 3.4.3)
project(xjson)

set(XJSON_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

################
# Dependencies #
################

set(pybind11_json_REQUIRED_VERSION 0.2.11)

find_package(pybind11_json ${pybind11_json_REQUIRED_VERSION} REQUIRED)

################
# Installation #
################

pybind11_add_module(${PROJECT_NAME} src/main.cpp)

target_compile_definitions(${PROJECT_NAME} PRIVATE VERSION_INFO=${XJSON_VERSION})
