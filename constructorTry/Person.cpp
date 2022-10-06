#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

// constructor
Person::Person(){
    this->name = "Zhang San";
    this->age = 18;
}
Person::Person(int age, string name):age(age), name(name){
}
// copy constructor
Person::Person(const Person &p){
    this->age = p.age;
    this->name = p.name;
}

string Person::getName(){
    return this->name;
}
int Person::getAge(){
    return this->age;
}

int Person::setAge(int new_age){
    this->age = new_age;
    return this->age;
}
