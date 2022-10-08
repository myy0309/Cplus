#include <iostream>
using namespace std;

class Cake{
public:
    Cake(){
        this->height = 10;
    }
    
    int getHeight(){
        return  this->height;
    }
    
    // adding up two cakes' height
    Cake& pile_up_cake(Cake &c){
        // pass by reference &c and the return value is also a reference
        this->height += c.height;
        return *this;
        // 'this' is a pointer pointing to the current object
        // hence '*this' is the object itself
    }
private:
    int height;
};

int main() {
    Cake c1;
    Cake c2;
    
    // chain coding
    c1.pile_up_cake(c2).pile_up_cake(c2).pile_up_cake(c2);
    cout << c1.getHeight() << endl;
    
    return 0;
}
