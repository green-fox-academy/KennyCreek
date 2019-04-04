#include <iostream>


#include <iostream>
#include <string>
int factorio(int a);
int main(int argc, char* args[]) {

    // - Create a function called `factorio`
    //   it should calculate its input's factorial.
    //   it should not return it, but take an additional integer parameter and overwrite its value.

    int x, f;
    std::cout<<"Enter a number: "<<std::endl;
    std::cin>> x;
    f=factorio (x);
    std::cout<< "The factorial is "<<f <<std::endl;
    return 0;
}

int factorio(int a){
    int fact =1;
    while(a>=1){
        fact = fact*a;
        a--;

    }

    return fact;
}