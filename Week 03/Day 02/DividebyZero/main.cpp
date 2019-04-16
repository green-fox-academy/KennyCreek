#include <iostream>
#include <fstream>

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0


        try {
            int x;
            std::cout<<"Enter your number: ";
            std:: cin >> x;

            double number = 10.0 / x;

            if ( x == 0) {

                throw std::string("Fail");

            }

            std::cout << number << std::endl;

        } catch (std::string& e) {
            std::cout << e << std::endl;
        }

        return 0;
    }