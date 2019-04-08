#include <iostream>

void swap(int& x, int& y);

int main ()
{
    // Create a function which swaps the values of 'a' and 'b'
    // This time use a void funtion and pointers

    int a = 10;
    int b = 316;

    swap(a,b);

    std::cout<< "A is "<<a<<std::endl;
    std::cout<<"B is "<<b<<std::endl;


    return 0;
}

void swap(int& x, int& y){
            int temp;
            temp = x;
            x = y;
            y = temp;

}

