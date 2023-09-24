#include "iostream"

void doA(){ // void just means no return statement required
    std::cout << "doing A\n";
}

void doB(){ // void cannot be used in an expression such as std::cout
    std::cout << "doing B\n";
    doA();
}

int get_val_from_user(){
    int input{};
    std::cout << "enter number for magic:";
    std::cin >> input;
    return input;
}

int main(){
    std::cout << "in main \n";
    doA();
    doB();
    int user{get_val_from_user()};
    int more{get_val_from_user()};
    std::cout << "here is ur magic: " << user * 2 << " \n";
    std::cout << "also " << user+more << " \n";
    std::cout << "ending main \n";
    return 0;
}