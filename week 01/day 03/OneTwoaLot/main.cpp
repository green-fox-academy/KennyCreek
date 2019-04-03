#include <iostream>

int main() {
    std::cout<< "Enter the number"<<std::endl;



    int a;

    std::cin >> a;

    if ( a <=0 ) {
        std::cout << a << " not enough" << std::endl;
    } else if ( a == 1) {
        std::cout<< a << " One" << std::endl;
    } else if (a == 2){
        std::cout<< a << " Two" << std::endl;
    } else if (a > 2) {
        std::cout<< a << " A lot" << std::endl;
    }









    return 0;
}