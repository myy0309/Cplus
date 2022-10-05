#include<iostream>
using namespace std;

// use reference as parameter of function
void swap(int &i, int &j){
    int temp = i;
    i = j;
    j = temp;
}

int& test(){
    static int a = 10; //a is not a local variable anymore
    return a;
}

// illegal: return reference of local variable
//int &test(){
//    int a = 10;
//    return a;
//}

int main(){
    int a = 1;
    // create a reference to a
    int & b = a; // 自动转换为 int* const b = &a; 指针常量
    b = 2; // 编译器发现b为引用，自动转换为*b = 2；

    cout << "a=" << a << endl;
    cout << "b=" << b << endl; // value of b changes with a

    int i = 10;
    int j = 20;
    swap(i, j);
    cout << "i=" << i << endl;
    cout << "j=" << j << endl;
    
    int & ref = test();
    cout << ref << endl;
    cout << ref << endl;
    test() = 100;
    cout << ref << endl;
    cout << ref << endl;
    
    
    return 0;
}
