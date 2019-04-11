#include <iostream>
void sum (int number);
int main() {


    int a = 74 % 10;
    int b = 74 / 10;
    int num = a + b;

    sum(num);

    return 0;
}

void sum (int number){

    if(number>0){
        sum(number - 1);

    }
    std::cout<<number<<std::endl;
}

