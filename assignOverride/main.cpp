#include <iostream>
using namespace::std;

class Person{
private:
    
public:
    int *age;
    Person(){
        this->age = new int(18);
    }
    Person(int age){
        this->age = new int(age);
    }
    ~Person(){
        if (age != NULL){
            delete age;
            age = NULL;
        }
    }
    
    // override assign value operator
    Person& operator=(Person &p){
        if(this->age != NULL){
            delete age;
            age = NULL;
        }
        this->age = new int(*p.age);
        return *this;
    }
} ;

void test(){
    Person p1(20);
    Person p2;
    Person p3(30);
    p2 = p1 = p3;
    cout << "p1's age is " << *p1.age << endl;
    cout << "p2's age is " << *p2.age << endl;
}

int main() {
    test();
    return 0;
}
