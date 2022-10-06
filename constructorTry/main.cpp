#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main() {
    Person p1; // do not put an empty bracket after p1, compiler will take it as function definition
    //Person p1(); // error
    cout << "the p1's name is " << p1.getName() << ", age is " << p1.getAge() << endl;
    
    Person p2(20, "Li Si");
    Person p22 = Person(21, "Xiaoming");
    cout << "the p2's name is " << p2.getName() << ", age is " << p2.getAge() << endl;
    cout << "the p22's name is " << p22.getName() << ", age is " << p22.getAge() << endl;
    
    Person p3(p2);
    cout << "the p3's name is " << p3.getName() << ", age is " << p3.getAge() << endl;
    
    // anonymous object, will be delete as soon as the line is executed
    Person(23, "Discord");
    
    // do not use copy constructor to initialize an anonymous object
    // Person(p1);
    
    
    return 0;
}
