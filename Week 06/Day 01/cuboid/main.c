#include <stdio.h>
// Write a program that stores 3 sides of a cuboid as variables (doubles)
// You should get these variables via console input
// The program should write the surface area and volume of the cuboid like:
//
// Surface Area: 600
// Volume: 1000
int main() {


    double lenght = 0.0;
    double width = 0.0;
    double height = 0.0;

    printf("Enter the lenght\n");
    scanf("%lg" , &lenght);
    printf("Enter the width\n");
    scanf("%lg" , &width);
    printf("Enter the height\n");
    scanf("%lg" , &height);

    double volume = lenght * width * height;
    double area = 2 * (lenght + width + height);


    printf("Surface area: %.2lf\n", area);
    printf("Volume: %.2lf\n", volume);
    return 0;
}