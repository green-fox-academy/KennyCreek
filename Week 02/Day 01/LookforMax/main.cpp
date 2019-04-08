
#include <iostream>

int main() {
    // Create a program which first asks for a number
    // this number indicates how many integers we want to store in an array
    // and than asks for numbers till the user fills the array
    // It should print out the biggest number in the given array and the memory address of it

    int a;
    std::cout<<"Give in a number ";
    std::cin>> a;

    int array[a];
    std::cout<<"Add the numbers into the array";
    for(int i = 0; i<a; ++i){
        std::cin>>array [i];
    }

    int max = array [0];
    for (int i = 0; i < a ; ++i) {
        if(max<array[i]){
            max = array[i];
        }
    }
std::cout<< max <<std::endl;
    return 0;
}