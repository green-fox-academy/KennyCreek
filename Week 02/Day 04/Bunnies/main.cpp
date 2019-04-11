#include <iostream>
//We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).


int bunny (int x);
int main() {



int a = 10;

int ears = bunny(a);

std::cout<<ears<<std::endl;

return 0;
}

int bunny (int x){
    if(x == 1){
        return 2;
    }
    return bunny(x - 1) + 2;
}
