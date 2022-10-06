#include <iostream>
using namespace::std;

// override function
void func(int &a){
    cout << "func(int &a)" << endl;
}
void func(const int &a){
    cout << "func(const int &a)" << endl;
}

// override function with default parameter
void func2(int a){
    cout << "func2 without default parameter" << endl;
}
void func2(int a, int b = 0){
    cout << "func2 with default parameter" << endl;
}

int main() {
    func2(0, 0);

    int a = 0;
    func(a); // func without const will be called
    func(0); // func with const will be called
    return 0;
}
