#include <iostream>

int main() {

    int Chickens;
    int Pigs;

    std::cout<<"Add the number of the animals"<<std::endl;
    std::cin>> Chickens;
    std::cin>> Pigs;

    int x = (Chickens* 2) + (Pigs * 4);
    std::cout<< "Legs "<<x<<std::endl;

    return 0;
}