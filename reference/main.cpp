#include<iostream>
using namespace std;

// use reference as parameter of function
void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}

int main(){
    int a = 1;
    // create a reference to a
    const int & b = a;
    
    a = 2;
    
    cout << "a=" << a << endl;
    cout << "b=" << b << endl; // value of b changes with a
    
    int i = 10;
    int j = 20;
    swap(i, j);
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;
    
    
    return 0;
}
