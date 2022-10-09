#include <iostream>
#include <string>
using namespace std;

class Inventory{
    
    friend ostream& operator<<(ostream &cout, Inventory &i);
    
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
    // It's uncommon to override << in member function
    // because we have to call it like 'p << p', we want to keep 'cout' in the left
//    void operator<<(Inventory&){
//
//    }
 private:
     int carrot;
     int beans;
 };

// use global function to override <<
// essentially: 'operator<<(cout, i)' to call it, hence it can be simplified to 'cout << i'
ostream& operator<<(ostream &cout, Inventory &i){ // cout is an object of Class ostream
    cout << "carrot: " << i.carrot << ", beans:" << i.beans;
    return cout; // so that we can do chain coding
}

int main() {
    Inventory i;
    cout << i << endl;
    return 0;
}
