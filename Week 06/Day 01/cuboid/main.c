#include <stdio.h>
// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000
int main() {

    double lenght = 17.5;
    double width = 10.5;
    double height = 8.5;

    double volume = lenght * width * height;
    double area = 2 * (lenght + width + height);


    printf("Surface area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);
    return 0;
}