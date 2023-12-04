cmake_minimum_required(VERSION 3.25)
project(RatinalCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(RatinalCpp main.cpp Rational.cpp Rational.h RationalArray.cpp RationalArray.h)
