#include "Cat.h"
#include <iostream>
#include <string>
using namespace std;

Cat::Cat(){
    this->name = "Mimi";
    this->speed = 100.0;
    this->age = 4;
    this->length = new int(50);
}

Cat::Cat(double speed, string name, int age, int length, string type, string color):speed(speed), name(name), age(age), my_tail(type, color){
    this->length = new int(length); // new will return an int address (*int)
}

Cat::Cat(Cat &c){
    this->name = c.name;
    this->speed = c.speed;
    this->age = c.age;
    // this->length = c.length; //this is how complier does it (shallow copy)
    this->length = new int(*c.getLength()); // deep copy
}

//variable created by 'new' stored in stack, we have to release it manually
Cat::~Cat(){
    if(this->length != NULL){
        delete this->length;
    }
}

double Cat::getSpeed(){
    return this->speed;
}
string Cat::getName(){
    return this->name;
}
int Cat::getAge(){
    return this->age;
}
int* Cat::getLength(){
    return this->length;
}
Tail& Cat::getTail(){
    return this->my_tail;
}
