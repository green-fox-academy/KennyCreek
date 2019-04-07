#include <iostream>

int main() {

    int a = 8;
    int b = 0;
    bool number = true;

    while (number){
        std::cout<<"Add a number";
        std::cin>>b;
        if(a<b){
            std::cout<<"The number is lower"<<std::endl;
        } else if (a>b){
            std::cout<<"The number is higher"<<std::endl;
        }
        else if(a == b){

            std::cout<<"You have found the number"<<std::endl;
            number = false;
        }
    }





    return 0;
}