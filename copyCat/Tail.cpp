#include "Tail.h"
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

Tail::Tail(){
    this->type = "furry";
    this->color = "brown";
}
Tail::Tail(string type, string color):type(type), color(color){
}
string Tail::getType(){
    return this->type;
}
string Tail::getColor(){
    return this->color;
}
