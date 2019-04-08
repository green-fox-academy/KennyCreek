#include <iostream>


void valueofarrays(int *numberofarray, int x);

int main() {
    // Create a program which accepts five integers from the console (given by the user)
    // and store them in an array
    // print out the values of that array using pointers again


    int array[5];

    for (int i = 0; i < 5; ++i) {
        std::cin >> array[i];


    }

    valueofarrays(array, 5);

    return 0;
}

void valueofarrays(int *numberofarray, int x) {
    for (int i = 0; i < x; ++i) {
        std::cout << *(numberofarray + i)<< std::endl;


    }
}