#include<iostream>
using namespace std;

int main(){
    int a = 1;
    // create a reference to a
    const int & b = a;
    
    a = 2;
    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    return 0;
}
