#include "iostream"
#define MY_NAME "John" // called macro define, not recommended
// # macros only apply to the file they were created in

int main(){
#ifdef MY_NAME //defined so will run
    std::cout << "My name is " << MY_NAME;
#endif
#if 0 // this will comment out everything nested between 0 and endif
    std::cout << "no will know I'm special bc this won't print";
#endif // can change 0 to 1 to quickly include everything
    return 0;
}
