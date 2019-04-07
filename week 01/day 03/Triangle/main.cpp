#include <iostream>

int main(int argc, char* args[]) {

    // Write a program that reads a number from the standard input, then draws a
    // triangle like this:
    //
    // *
    // **
    // ***
    // ****
    //
    // The triangle should have as many lines as the number was


    int a = 0;
    std::cout<< "Please enter the number here "<< std::endl;
    std::cin>> a;

    for(int i = 0; i < a; ++i){
            for(int j = 0; j <=i; ++j){

                std::cout<< "*";
            }
            std::cout<<std::endl;
    }




    return 0;
}