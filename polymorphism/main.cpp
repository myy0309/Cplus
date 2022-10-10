#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    void speak(){
        cout << "speaking" << endl;
    }
};

class Cat : public Animal{
public:
    void speak(){
        cout << "Meow Meow!" << endl;
    }
};

// early bind: the address is determined when compiling
void doSpeak(Animal a){
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
