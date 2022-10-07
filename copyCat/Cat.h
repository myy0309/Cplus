#ifndef Cat_h
#define Cat_h
#include <string>
#include "Tail.h"
using namespace std;

class Cat{
public:
    Cat();
    Cat(double speed, string name, int age, int length, string type, string color);
    Cat(Cat &c);
    ~Cat();
    double getSpeed();
    string getName();
    int getAge();
    int* getLength();
    Tail& getTail();
private:
    double speed;
    string name;
    int age;
    int* length;
    Tail my_tail; // it is common to make embedded objects as private
};

#endif /* Cat_h */
