#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `r`
    //   with the following content: `[54, 23, 66, 12]`
    // - Print the sum of the second and the third element
    int r[4]{54, 23, 66, 12};

    int a = r[1];
    int b = r[2];

    std::cout<< "The number is "<< a + b<<std::endl;

    return 0;
}