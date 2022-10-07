#ifndef Cat_h
#define Cat_h
#include <string>
using namespace::std;

class Cat{
public:
    Cat();
    Cat(double speed, string name, int age, int length);
    Cat(Cat &c);
    ~Cat();
    double getSpeed();
    string getName();
    int getAge();
    int* getLength();
private:
    double speed;
    string name;
    int age;
    int* length;
};

#endif /* Cat_h */
