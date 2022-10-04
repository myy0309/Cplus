/*
 * main.cpp
 *
 *  Created on: 2022年9月30日
 *      Author: moyuyue
 */

#include <iostream>
#include <string>
using namespace std;

// create a struct
struct Student
{
	string name;
	int age;
	float score;
};

// pass the struct by value
void printStudent1 (struct Student s){
	cout << "The student's name is " << s.name << endl;
}
// pass the struct by address
void printStudent2 (const struct Student* s){
	// s->age = 100; // attempt to change the value of student will cause error
	cout << "The student's name is " << s->name << endl;
}

int main(){
	// use struct to create a specific student
	// method 1
	struct Student s1; // 'struct' here can be omitted
	s1.name = "yi";
	s1.age = 21;
	s1.score = 89.6;
	// method 2
	struct Student s2 = {"yue", 21, 86};

	// create struct in array
	struct Student stuArray[8] =
	{
			{"Helen", 20, 77},
			{"Wuxi Dixi", 3, 100},
	};
	// assign values to struct in array
	stuArray[0].name = "Maka Baka"; // change value
	stuArray[2].age = 18;

	// create a pointer points to a student
	struct Student* p = &s1; // 'struct' here can be omitted
	// use struct pointer to access the data
	cout << p->name <<endl;


	return 0;
}


