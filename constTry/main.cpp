/*
 * main.cpp
 *
 *  Created on: 2022年9月24日
 *      Author: moyuyue
 */
#include <iostream>
using namespace std;

int main(){
	const char *s1 = "Hello World"; //Here must be a 'const'
	//s[0] = 'B';  content of the string cannot be change

	char s2[] = "Hello World";
	s2[0] = 'B'; //legal, s2 now is "Bello World"
}

