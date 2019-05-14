#include <stdio.h>
// define a variable called PI with the value of 3.14
// create a function which takes the radius of a circle as a parameter
// and return the area of that circle
// area = radius * radius * PI

float radius(float r, float a);
int main() {

    float Pi = 3.14;
    float rad = 4.5;

    float result = radius(rad, Pi);

    printf("%.2f\n" , result);
    return 0;
}

float radius(float r, float a)
{
    float area = r * r * a;

    return area;
}
