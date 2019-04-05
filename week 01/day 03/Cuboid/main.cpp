#include <iostream>

int main() {

    int width = 10;
    int height = 10;
    int length = 10;

    int volume  = width * height * length;

    std::cout<< "Volume "<<volume<<std::endl;

    int surface = 2*(width * length) + 2* (length * height) + 2*(height * width);

    std::cout<< "Surface " <<surface<< std::endl;



    return 0;
}