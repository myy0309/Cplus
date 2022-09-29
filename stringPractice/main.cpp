/*
 * main.cpp
 *
 *  Created on: 2022年9月28日
 *      Author: moyuyue
 */


#include <iostream>
#include <string>
#include <stdlib.h>

// passing by reference
void addString(std::string& string){
	string += 'q';
	std::cout << string << std::endl;
}

int main(){

// method 1 to create a string
	const char* name = "Mo Yuyue";
	//char[1] = 'N'; //illegal

// method 2 to create a string
	char name2[3] = {'M', 'o', 0} ;
	char name22[3] = {'M', 'o', '\0'} ;
	// char name2[2] = {'M', 'o'} ; this will cause problem

// method 3 to create a string
	std::string name3 = "Mo Yuyue";

	std::cout << name3.size() << std::endl;
	std::cout << name3 << std::endl;

	// std::string addName = "Mo" + "Yi"; illegal
	name3 += "Yi";
	std::string addName = std::string("Mo") + "Yi";

	addString(name3);
	std::cout << name3 << std::endl;

	return 0;
}

