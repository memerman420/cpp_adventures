#include "iostream"

int gettingInput(){
    int x{};
    std::cout << "Pls enter number thanks:";
    std::cin >> x; // note how its >> instead of <<
    return x;
}