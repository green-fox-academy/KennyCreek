#include <iostream>
int ears (int x);
int main() {

    int bunny = 10;

std::cout<<ears(bunny) <<std::endl;
    return 0;
}

int ears (int x){

    if( x == 0){
        return 0;
    }

    if( x % 2 == 0){
        return (ears(x - 1)) + 3;
    }else{
        return (ears(x - 1)) + 2;
    }

}



