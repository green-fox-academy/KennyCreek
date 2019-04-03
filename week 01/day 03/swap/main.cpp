#include <iostream>

int main() {
    int a = 123, b = 526, temp;

    std::cout << " a=" << a << " b=" << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << " a=" << a << " b=" << b << std::endl;




    return 0;
}