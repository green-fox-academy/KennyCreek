#include <iostream>
#include <string>

int main(int argc, char* args[])
{
    std::string todoText = " - Buy milk\n";
    // Add "My todo:" to the beginning of the todoText
    // Add " - Download games" to the end of the todoText
    // Add " - Diablo" to the end of the todoText but with indentation

    // Expected outpt:

    // My todo:
    //  - Buy milk
    //  - Download games
    //      - Diablo

    std::string zero = "My todo:\n";
    std::string first = " - Download games\n";
    std::string second = " \t - Diablo";

    std::string concatanate = zero + todoText + first + second;

    std::cout << concatanate << std::endl;

    return 0;
}