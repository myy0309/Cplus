/*
 * Father.cpp
 *
 *  Created on: 2022年9月22日
 *      Author: moyuyue
 */

#include "Father.h"
#include <iostream>
using namespace std;

//Father::Father() {
//	this->age = 35;
//	this->money = 100.0;
//}
Father::Father(int age, float money) : age(age), money(money){
}

Father::~Father() {
}


void Father::setAge(int age){
	this->age = age;
}

void Father::printAge(){
	cout << "My age is " << age << endl;
}

void Father::printMoney(){
	cout << "My money is " << money << endl;
}
void Father::printMoney(int i){
	cout << "Father's money plus i is " << age+i << endl;
}
