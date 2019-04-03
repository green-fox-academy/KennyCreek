#include <iostream>

int main() {

    int currentHours = 14;
    int currentMinutes = 34;
    int currentSeconds = 42;

    currentMinutes = 34 * 60;
    currentHours = 3600 * 14;

    int a = 3600 * 24;

    std::cout << a -(currentHours + currentMinutes + currentSeconds) << std::endl;





    return 0;
}