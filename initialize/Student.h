/*
 * Student.h
 *
 *  Created on: 2022年9月21日
 *      Author: moyuyue
 */

#ifndef STUDENT_H_
#define STUDENT_H_

class Student {
public:
	Student();
	Student(int a, float w);
	virtual ~Student();

	void showAge();
private:
	int age;
	float weight;
	//String name;
};

#endif /* STUDENT_H_ */
