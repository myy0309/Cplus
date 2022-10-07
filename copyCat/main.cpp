#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

int main() {
    Cat cat1;
    Cat cat2(120.0, "Kitty", 5, 30);
    Cat cat3(cat1);
    cout << "My name is " << cat1.getName() << ", my speed is " << cat1.getSpeed() << ", my age is " << cat1.getAge() << ", my length is " << *cat1.getLength() << endl;
    cout << "My name is " << cat2.getName() << ", my speed is " << cat2.getSpeed() << ", my age is " << cat2.getAge() << ", my length is " << *cat2.getLength() << endl;
    cout << "My name is " << cat1.getName() << ", my speed is " << cat1.getSpeed() << ", my age is " << cat1.getAge() << ", my length is " << *cat1.getLength() << endl;
    return 0;
}
