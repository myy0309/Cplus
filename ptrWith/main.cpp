/*
 * main.cpp
 *
 *  Created on: 2022年9月29日
 *      Author: moyuyue
 */

#include <iostream>
using namespace std;

void swap01(int i, int j){
	int temp = i;
	j = i;
	i = temp;
}

void swap02(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	// use pointer to access the first element in array
	int *p = arr; // the type of the pointer should be the same as the array
	cout << "the first element in the array is " << *p <<endl;
	// use pointer to access the second element in array
	p++;
	cout << "the second element in the array is " << *p <<endl;


	// use pointer as parameters of function
	int i = 0;
	int j = 1;
	swap01(i,j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl; // the values of i,j stay unchanged
	swap02(&i, &j);
	cout << "i = " << i << endl;
	cout << "j = " << j << endl; // the values of i,j change



	return 0;
}


