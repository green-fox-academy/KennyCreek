#include <iostream>

int main ()
{
    // Create a pointer for each variable and print out the memory addresses of that variables
    // Print out the values of the pointers

    int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    std::cout<< &a << std::endl;
    std::cout<< &b << std::endl;

    int *apointer;
        apointer = &a;
        std::cout<< *&a<<std::endl;

        double *bpointer;
        bpointer = &b;
        std::cout<<*&b<<std::endl;

    return 0;
}