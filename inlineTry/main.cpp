/*
 * main.cpp
 *
 *  Created on: 2022年9月24日
 *      Author: moyuyue
 */

#include "Vender.h"
#include <iostream>
using namespace std;

int main(){
	Vender v;
	v.setMoney(30);
	int a = v.insertMoney(2);
	cout << a << endl;
}


