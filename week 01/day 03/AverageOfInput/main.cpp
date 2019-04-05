#include <iostream>

int main() {

    std::cout<< "Enter your numbers"<<std::endl;
    int a,
        b,
        c,
        d,
        e;

    std::cin>>a;
    std::cin>>b;
    std::cin>>c;
    std::cin>>d;
    std::cin>>e;

    int sum = a + b + c + d + e;

    std::cout<< "Sum: "<<sum<<std::endl;

    int ave = sum / 5;

    std::cout<< "Average: "<<ave<<std::endl;



    return 0;
}