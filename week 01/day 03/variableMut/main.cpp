#include <iostream>
#include <math.h>

int main() {

    int a = 3;
    a += 10;

    std::cout << a << std::endl;

    int b = 100;
    b -= 7;

    std::cout << b << std::endl;

    int c = 44;
    c *= 2;

    std::cout << c << std::endl;

    int d = 125;
    d /= 5;

    std::cout << d << std::endl;

    int e = 8;
    e = pow(8, 3);

    std::cout << e << std::endl;

    int f1 = 123;
    int f2 = 245;

    bool f = f1 > f2;
    std::cout << f << std::endl;

    int g1 = 350;
    int g2 = 200;

    bool g = (2 * g2) > g1;

    std::cout << g << std::endl;

    int h = 135798745;

    bool h1 = (h % 11 == 0 ? true : false);

    std::cout << h1 << std::endl;

    int i1 = 10;
    int i2 = 3;

    bool i = i1 >= pow(i2, 2) && i1 <= pow(i2, 3);

    std::cout << i << std::endl;

    int j = 1521;

    bool j1 = (j / 3) || (j / 5);

    std::cout << j1 << std::endl;


    return 0;
}