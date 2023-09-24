#include "iostream"

int get_val_from_user(){
    int input{};
    std::cout << "enter number for magic:";
    std::cin >> input;
    return input;
}

void printDouble(int x){
    std::cout << x * 2 << "\n";
}

void doSomething(int){ // when you need type but no var = unamed parameter
}


int main(){
    int x{get_val_from_user()};
    printDouble(x);
    return 0;
}