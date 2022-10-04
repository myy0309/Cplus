#include <iostream>

//int func(){
//    int a = 10;
//    return *a; // illeagal
//}

int* stack_int_generator(int i){
    // create an int variable in stack use keyword 'new'
    int * p = new int(i);
    return p; //legal
}

int* stack_array_generator(){
    int* arr = new int[10]; //create an stack array with 10 elements
    for(int j=0; j<10; j++){
        arr[j] = j+1;
    }
    return arr;
}

int main() {
    int * p = stack_int_generator(1);
    int * arr = stack_array_generator();
    
    std::cout << "The value of the int is " << *p << std::endl;
    std::cout << "The value of the array is ";
    for(int j=0; j<10; j++){
        std::cout << arr[j] << " ";
    }

    return 0;
}
