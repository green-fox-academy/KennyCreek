#include <iostream>

int main() {

    for (int i = 1; i < 100; i++){
        std::cout<< i << std::endl;
        if ( i%3 == 0){
            std::cout<< "Fizz"<<std::endl;
        }
        if ( i%5==0){
            std::cout<<"Buzz"<<std::endl;
        }
        if (i%3 ==0, i%5 ==0){
            std::cout<<"FizzBuzz"<<std::endl;
        }
    }




    return 0;
}