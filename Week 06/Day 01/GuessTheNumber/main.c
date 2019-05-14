#include <stdio.h>
#define NUMBER 8

// Write a program that stores a number, and the user has to figure it out.
// The user can input guesses, after each guess the program would tell one
// of the following:
//
// The stored number is higher
// The stried number is lower
// You found the number: 8
int main() {

    int guessed_Num = 0;

    printf("Enter the number you've guessed: \n");
    scanf("%d", &guessed_Num);

    if(guessed_Num == NUMBER)
    {
        printf("You've guessed it: %d \n" , NUMBER);
    } else if (guessed_Num < NUMBER)

    {
        printf("The number is bigger\n");
    } else if (guessed_Num > NUMBER)

    {
        printf("The number is smaller\n");
    }
    return 0;
}