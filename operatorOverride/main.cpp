#include <iostream>
#include <string>
using namespace std;

class Inventory{
public:
    Inventory(){
        this->carrot = 100;
        this->beans = 100;
    }
    Inventory(int carrot, int beans):carrot(carrot), beans(beans){
        
    }
    int getCarrot(){
        return carrot;
    }
    int getBeans(){
        return beans;
    }
    void setCarrot(int i){
        this->carrot = i;
    }
    void setBeans(int i){
        this->beans = i;
    }
    Inventory& operator+ (Inventory &i){
        this->carrot += i.carrot;
        this->beans += i.beans;
        return *this;
    }
    Inventory& operator+ (int delta){
        this->carrot += delta;
        this->beans += delta;
        return *this;
    }
private:
    int carrot;
    int beans;
};

Inventory operator- (Inventory &i1, Inventory &i2){
    i1.setCarrot( i1.getCarrot() - i2.getCarrot() );
    i1.setBeans( i1.getBeans() - i2.getBeans() );
    cout << "The address of return object is " << &i1 << endl; // return the address of the input i1
    return i1;
}
Inventory& operator- (Inventory &i, int delta){
    i.setCarrot( i.getCarrot() - delta );
    i.setBeans( i.getBeans() - delta );
    return i;
}

void test1(){
    Inventory i1;
    Inventory i2;
    i1 = i1 + i2 + i1;
    cout << "The number of carrots in newInventory is " << i1.getCarrot() << ". The number of beans is " << i1.getBeans() << endl;
    cout << endl;
}
void test2(){
    Inventory i1;
    Inventory i2;
    Inventory newInventory = i1 - i2; //copy construct
    // i1 and the return object's addresses are same (the return object is i1)
    // i1 and newInventory's addresses are different
    cout << "Address of i1 is " << &i1 << endl;
    cout << "Address of newInventory is " << &newInventory << endl;
    // but i1 and newInventory have the same value
    cout << "The number of carrots in inventory is " << newInventory.getCarrot() << ". The number of beans is " << newInventory.getBeans() << endl;
    cout << "The number of carrots in newInventory is " << i1.getCarrot() << ". The number of beans is " << i1.getBeans() << endl;
    cout << endl;
}
void test3(){
    Inventory i1;
    Inventory i2;
    i1 = i1 + 100;
    // i2 = i2 - 10; same effect
    cout << "The number of carrots in inventory is " << i1.getCarrot() << ". The number of beans is " << i1.getBeans() << endl;
    cout << "The number of carrots in inventory is " << (i2 - 10).getCarrot() << ". The number of beans is " << i2.getBeans() << endl;
    cout << endl;
}

int main() {
    test1();
    test2();
    test3();
    return 0;
}
