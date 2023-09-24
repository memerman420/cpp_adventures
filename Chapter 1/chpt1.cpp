#include "iostream"

int main(){
    int a{},b{};
    std::cout << "int pls:";
    std::cin >> a;
    std::cout << "another int pls:";
    std::cin >> b;
    std::cout << a << "+" << b << " is " << a+b << ".\n";
    std::cout << a << "-" << b << " is " << a-b << ".\n";
    return 0;
}