#include "iostream"

// sequencing of functions matter, e.g. they are sequential
// if you have a function that calls another function that has not been declared yet
// there will be error, so you have to do it this way.

int add(int,int); // called forward declarator, can finalise body elsewhere
// I have defined it in add.cpp and changed the CMake file to match

int gettingInput();


int main(){
    int x{gettingInput()};
    int y{gettingInput()};
    std::cout << x << " + " << y << " is " << x+y << "\n";
    return 0;
}

