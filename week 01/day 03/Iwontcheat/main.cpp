#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // Create a program that writes this line 100 times:
    // "I won't cheat on the exam!"

    int cheat = 0;
    while (cheat <=100){
        std::cout<< "I won't cheat on the exam!"<< std::endl;
        cheat = cheat+1;
    }
    return 0;
}
