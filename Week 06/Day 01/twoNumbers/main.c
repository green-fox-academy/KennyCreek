#include <stdio.h>

// Create a program that prints a few operations on two numbers: 22 and 13

    // Print the result of 13 added to 22

    // Print the result of 13 substracted from 22

    // Print the result of 22 multiplied by 13

    // Print the result of 22 divided by 13 (as a decimal fraction)

    // Print the reminder of 22 divided by 13

    // Store the results in variables and use them when you display the result


int main() {

    int a = 13;
    int b = 22;
    int sum = a + b;
    printf("%d\n", sum);

    int subs = b - a;
    printf("%d\n" , subs);

    int multi = a * b;
    printf("%d\n" , multi);

    float divide = b / a;
    printf("%.2f\n" , divide);

    int remain = b % a;
    printf("%d\n" , remain);





    return 0;
}