#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    virtual void speak() = 0;
};

class Cat : public Animal{
public:
    void speak(){
        cout << "Meow Meow!" << endl;
    }
};

// late bind: the address is determined when the code is running
void doSpeak(Animal &a){ // Animal &a = cat
    a.speak();
}

void test1(){
    Cat c;
    doSpeak(c);
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
