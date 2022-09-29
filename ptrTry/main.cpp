/*
 * main.cpp
 *
 *  Created on: 2022年9月29日
 *      Author: moyuyue
 */

#include <iostream>
using namespace std;

int main(){
	int a = 1;
	int *ptr = &a; // define a pointer

	cout << "a = " << a << endl;
	cout << "ptr = " << ptr << endl;
	cout << "*ptr = " << *ptr << endl;

	*ptr = 2; // the value of a will also be changed
	cout << "a = " << a << endl;
	cout << "*ptr = " << *ptr << endl;

	// get the size of pointer
	cout << "size of pointer: " << sizeof(ptr) << endl;
	cout << "size of pointer: " << sizeof(int*) << endl;

	// three ways to define null pointer
	int *p1 = NULL;
	int *p2 = nullptr;
	int *p3 = 0;
	cout << "p1 = " << p1 << endl;
	cout << "p2 = " << p2 << endl;
	cout << "p3 = " << p2 << endl;
	// operation on *p is not allowed

	// wild pointer
	int *wp = (int*)0x1100;
	// but in fact pointer wp does not have permission to access the address it points to
	// cout << *p << endl; //will cause error since we don't know what is stored in that address 0x1100

	// const and pointer
	int i = 10;
	int j = 10;
	const int *cp1 = &i;
	cp1 = &j; // legal, since a and b have the same value
	// *cp1 = 20; // illegal

	int * const cp2 = &i;
	*cp2 = 20; // legal
	// cp2 = &j; // illegal, the address that p points to cannot be changed

	const int * const p = &i;
	// p = &j; // illegal
	// *p = 20; // illegal



	return 0;
}




