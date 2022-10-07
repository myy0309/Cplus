#ifndef Tail_h
#define Tail_h
#include <string>
using namespace std;

class Tail{
public:
    Tail();
    Tail(string type, string color);
    string getType();
    string getColor();
private:
    string type;
    string color;
};

#endif /* Tail_h */
