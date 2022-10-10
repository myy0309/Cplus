#include <iostream>
#include <string>
using namespace::std;

class Printer{
public:
    //override call operator ()
    void operator()(string content){
        cout << content << endl;
    }
    void operator()(int i, int j){
        cout << i+j << endl;
    }
};

void test(){
    Printer p;
    p("Hello World!");
    p(1, 2);
    Printer()("How are you?");
}

int main() {
    test();
    return 0;
}
