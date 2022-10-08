#include <iostream>
using namespace std;

class Turtle{
public:
    // static variable is declared inside the class
    static int staInt;
};

// static variable is initialized outside the class
int Turtle::staInt = 100;


int main() {
    Turtle myTurtle;
    cout << myTurtle.staInt << endl; // called by an object of the class
    cout << Turtle::staInt << endl; // called by the class name
    return 0;
}
