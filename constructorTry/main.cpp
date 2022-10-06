#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

void someFunc (Person p){
    p.setAge(100);
}

Person someFunc2 (){
    Person p;
    return p;
}

int main() {
    Person p1; // do not put an empty bracket after p1, compiler will take it as function definition
    //Person p1(); // error
    cout << "the p1's name is " << p1.getName() << ", age is " << p1.getAge() << endl;
    
    Person p21(20, "Li Si");
    Person p22 = Person(21, "Xiaoming");
    cout << "the p21's name is " << p21.getName() << ", age is " << p21.getAge() << endl;
    cout << "the p22's name is " << p22.getName() << ", age is " << p22.getAge() << endl;
    
    // copy construct
    // 2 ways to create
    Person p31(p1);
    Person p32 = p1;
    cout << "the p31's name is " << p31.getName() << ", age is " << p31.getAge() << endl;
    cout << "the p32's name is " << p32.getName() << ", age is " << p32.getAge() << endl;
    // example of usage of copy construct
    // 1. use copy construct as input parameter of function
    someFunc(p1);
    cout << "Is p1 change? " << p1.getAge() <<endl;
    // 2.use copy construct as return value
    Person p4 = someFunc2();
    
    // anonymous object, will be delete as soon as the line is executed
    Person(19, "Discord");
    cout << "the p's name is " << Person(19, "Discord").getName() << ", age is " << Person(19, "Discord").getAge() << endl;
    
    // do not use copy constructor to initialize an anonymous object
    // Person(p1);
    

    
    return 0;
}
