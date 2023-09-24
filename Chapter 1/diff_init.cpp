#include "iostream"
// different types of init
int main(){
    int a;
    a = 5; // called assignment, not init
    std::cout << a << "\n"; // notice how we use << to chain print more info
    int y,z = 4; // this actually leaves y uninitialised lel
    std::cout << y << "\n"; // y has some random value
    std::cout << z << "\n";
    int b{2},d{3}; // Proper double with list init
    std::cout << b << "\n";
    std::cout << d << "\n";
    int width{4}; // list initialisation, narrowing conversions = means if you try to initialise
    // something inside what it cannot hold, will throw error immediately
    std::cout << width << "\n";
    int no{}; // zero initialisation
    std::cout << no << "\n";
    std::cout << "wow cool initialisations!! \n";
    std::cout << "Generally we want to use list init {} bc modern\n" ;
    [[maybe_unused]] int amogus{5}; // can add this flag
    std::cout << "Using /n is faster than std::endl" << "\n";
    return 0;
}
