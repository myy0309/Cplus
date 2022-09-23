/*
 * Student.cpp
 *
 *  Created on: 2022年9月21日
 *      Author: moyuyue
 */

#include "Student.h"
#include <iostream>
using namespace std;

Student::Student() {
	this->age = 18;
	this->weight = 50.0;
}
Student::Student(int a, float w) : age(a), weight(w){
}

Student::~Student() {
}

void Student::showAge(){
	cout << this->age << endl;
}
