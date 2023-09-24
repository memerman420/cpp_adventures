#include "iostream"

int main(){
    int x{};
    std::cout << "Pls enter number thanks: ";
    std::cin >> x; // note how its >> instead of <<
    std::cout << "You entered " << x << "\n";
    int a{},b{};
    std::cin >> a >> b;
    std::cout << a+b;
    return 0;
}