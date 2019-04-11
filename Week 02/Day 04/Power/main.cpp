#include <iostream>
int powerN (int base, int n);
int main() {


    //Given base and n that are both 1 or more,
    //compute recursively (no loops) the value of base to the n power, so powerN(3, 2) is 9 (3 squared).
    std::cout << powerN(2, 10);

return 0;
}

int powerN (int base, int n){

    if(n == 1){
        return base;
    }
    return powerN(base, n - 1) * base;
}


