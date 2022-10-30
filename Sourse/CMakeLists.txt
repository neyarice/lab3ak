cmake_minimum_required(VERSION 3.16.3)

project(Calculator)
add_library(Calc STATIC ./src/calculator.cpp ./src/funcs.cpp ./src/funcs.h)
add_executable(Calculator 
	./src/calculator.cpp
	./src/funcs.cpp
	./src/funcs.h
)
