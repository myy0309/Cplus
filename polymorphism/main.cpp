#include <iostream>
#include <string>
using namespace std;

class Animal{
public:
    virtual void speak() = 0;
    // the deconstructor in base class must be virtual
    // otherwise the deconstructor in son class will not be executed
    virtual ~Animal(){
        // some code
    }
};
class Cat : public Animal{
public:
    string *name;
    Cat(string name){
        this->name = new string(name);
    }
    void speak(){
        cout << *name <<": Meow Meow!" << endl;
    }
    ~Cat(){
        if (this->name != NULL){
            delete name;
            name = NULL;
        }
    }
};

// late bind: the address is determined when the code is running
void doSpeak(Animal &a){ // Animal &a = cat
    a.speak();
}

void test1(){
    Cat c("Tom");
    doSpeak(c);
}

int main(int argc, const char * argv[]) {
    test1();
    return 0;
}
