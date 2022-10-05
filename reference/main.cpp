#include<iostream>
using namespace std;

// protect the input reference
void printValue(const int & val){
    // val = 100; illegal since val is const
    cout << val << endl;
}

int main(){
    
    // int &ref = 10; illeagl
    const int &ref = 10;
    // 编译器会将代码修改为 int temp = 10;  const int & ref = temp;
    // ref = 10; illeagl

    return 0;
}
