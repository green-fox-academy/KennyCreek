#include <iostream>
#include <string>

int main(int argc, char* args[]) {

    // - Create an array variable named `numList`
    //   with the following content: `[3, 4, 5, 6, 7]`
    // - Double all the values in the array

    int numList[5]{3, 4, 5, 6, 7};
    int a(numList[0] * 2);{
        std::cout<<a<<std::endl;
    }
    int b(numList[1] * 2);{
        std::cout<<b<<std::endl;
    }
    int c(numList[2] * 2);{
        std::cout<<c<<std::endl;
    }
    int d(numList[3] * 2);{
        std::cout<<d<<std::endl;
    }
    int f(numList[4] * 2);{
        std::cout<<f<<std::endl;
    }
    return 0;
}