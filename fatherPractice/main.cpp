/*
 * main.cpp
 *
 *  Created on: 2022年9月22日
 *      Author: moyuyue
 */

#include "Father.h"
#include "Son.h"

int main(){
	Father dad(50, 100.0);
	Son sonny(111);
	dad.printAge();
	sonny.printAge();

	sonny.printMoney();
	sonny.printMoney(100);

	//sonny->money = 80.0;

	return 0;
}


