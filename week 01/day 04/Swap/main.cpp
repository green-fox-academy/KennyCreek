#include <iostream>
#include <string>


int main(int argc, char* args[]) {
    // Create two integer variables: a=15, b=23
    // Create a function named swap that gets the 2 integers as parameters and swaps its values.
    // Print the values before and after the function call and make sure the values are printed in reversed order.

    int a = 15;
    int b = 23;
    std::cout<< "Before swap a= " <<a<< std::endl;
    std::cout<< "Before swap b= " <<b<< std::endl;

    std::swap(a, b);
    std::cout<< "After swap a= " <<a<<std::endl;
    std::cout<< "After swap b= " <<b<<std::endl;
    return 0;
}

