#include <iostream>
void recursiveFunction (int n);
int main() {

    int num =5;

    recursiveFunction(num);
    return 0;
}

void recursiveFunction (int n){

    if(n>0){

        recursiveFunction(n - 1);
    }

    std::cout<<n<<std::endl;

}