#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numbers`
    //   with the following content: `[4, 5, 6, 7]`
    // - Print all the elements of `numbers`

    int numbers[4]{4, 5, 6, 7};
    std::cout<< numbers[0]<<std::endl;
    std::cout<< numbers[1]<<std::endl;
    std::cout<< numbers[2]<<std::endl;
    std::cout<< numbers[3]<<std::endl;


    return 0;
}