/*
 * Son.cpp
 *
 *  Created on: 2022年9月22日
 *      Author: moyuyue
 */

#include "Son.h"
#include <iostream>
using namespace std;

Son::Son(int stdNum) : Father(0, 0.0), stdNum(stdNum) {
	// this->age = 18;
	setAge(18);
	this->money = 90.0;
}

Son::~Son() {
}

//void Son::printMoney(){
//	cout << "Son's money is " << money << endl;
//}

