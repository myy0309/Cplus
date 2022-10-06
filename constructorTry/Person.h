//
//  Person.h
//  constructorTry
//
//  Created by 莫雨悦 on 2022/10/6.
//

#ifndef Person_h
#define Person_h
#include <string>
using namespace std;

class Person {
public:
    Person();
    Person(int age, string name);
    Person(const Person &p);
    string getName();
    int getAge();
    int setAge(int new_age);
private:
    int age;
    string name;
};


#endif /* Person_h */
