#include <iostream>

int main() {


    int a = 0;

    std::cin>> a;

    for(int i = 0; i < a; i++){
        std::cout<<"%";
    }
    std::cout<<std::endl;


    for ( int j = 0; j < a - 2; ++j){
        std::cout<< "%";
        for (int k = 0; k < a - 2; ++k){
                if (j == k)
                    std::cout<<"%";
                    else std::cout<< " ";
                }
        std::cout<< "%"<<std::endl;

        }
    for(int i = 0; i < a; i++){
        std::cout<<"%";
    }
    std::cout<<std::endl;


    return 0;
}