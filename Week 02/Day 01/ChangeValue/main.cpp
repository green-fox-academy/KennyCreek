#include <iostream>



void newfloatnumber(float *temperature);



int main ()
{
    // Change the value of the variable called 'temperature' using a pointer
    // (you have to create the pointer first)

    float temperature = 21.3;
    newfloatnumber( &temperature);

    std::cout<< temperature <<std::endl;


    return 0;
}

void newfloatnumber(float *temperature){
    *temperature = 33.4;
}
