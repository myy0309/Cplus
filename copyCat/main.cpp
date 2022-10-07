#include <iostream>
#include <string>
#include "Cat.h"
using namespace std;

int main() {
    Cat cat1;
    Cat cat2(120.0, "Kitty", 5, 30, "bald", "dappled");
    Cat cat3(cat1);
    cout << "My name is " << cat1.getName() << ", my tail is " << cat1.getTail().getType() << " and " << cat1.getTail().getColor() << endl;
    cout << "My name is " << cat2.getName() << ", my tail is " << cat2.getTail().getType() << " and " << cat1.getTail().getColor() << endl;
    cout << "My name is " << cat1.getName() << ", my tail is " << cat1.getTail().getType() << " and " << cat1.getTail().getColor() << endl;
    return 0;
}
