#include <iostream>
#include <string>


int sum(int x) {
    int g = 0;
    for (int i = 0; i <= x; i++) {
        g = g + i;
    }
    return g;
}

int main(int argc, char *args[]) {

    // Write a function called `sum` that returns the sum of numbers from zero to the given parameter
    std::cout<< sum(4) << std::endl;
    sum(10);
    return 0;
}



