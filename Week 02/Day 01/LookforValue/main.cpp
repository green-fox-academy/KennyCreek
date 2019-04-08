
#include <iostream>
int function(int array[], int size, int check);
int main()
{
    // Create a function which takes an array (and it's lenght) and a number as a parameter
    // the function should return index where it found the given value
    // if it can't find the number return 0

   int array [10]{10, 13, 14, 15, 11, 5, 6, 19, 20, 9};
    int a = 6;
    int size = sizeof (array) / sizeof(int);
    function(array, size, a);
    std::cout<<function(array, size, a)<<std::endl;
    return 0;
}
int function(int array[], int size, int check){
    int match = 0;
    for(int i = 0; i< size; ++i){
        if(array [i] == check){
            match = i;
        }
    }
    return match;
}