#include <iostream>
#include "Animals.h"

int main() {

    Animals dog(50, 50);

    dog.eat();
    std::string myString = std::to_string(dog.getHunger());

    dog.drink();
    std::string myString2 = std::to_string(dog.getThirst());

    dog.play();
    std::string myString3 = std::to_string(dog.getPlay());



    std::cout<< myString <<"\n"<< myString2<<"\n" << myString3 <<std::endl;

    return 0;
}