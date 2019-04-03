#include <iostream>

int main() {
    std::cout<< "Enter your numbers"<< std::endl;
    int a;
    int b;

    std::cin>> a;
    std::cin>> b;

    if ( a + b >=20) {

        if ( a == b){
            std::cout<< "the party is excellent" << std::endl;
        } else {
            std::cout<< "The party is quite cool"<< std::endl;
        }

    } else {
        if (a == 0){
            std::cout<< "Sausage Party"<< std::endl;
        } else {
            std::cout<< "Average Party"<< std::endl;
        }
    }







    return 0;
}