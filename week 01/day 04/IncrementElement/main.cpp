#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `t`
    //    with the following content: `[1, 2, 3, 4, 5]`
    // - Increment the third element
    // - Print the third element
    int t[5]{1, 2, 3, 4, 5};

    int a = t[2];
    int (a +=5);
    std::cout<< a <<std::endl;

    return 0;
}