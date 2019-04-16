#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Open a file called "my-file.txt"
    // Write your name in it as a single line

    std::ofstream myFile;
    myFile.exceptions(std::ofstream::badbit);

    try{
        myFile.open("../my-file.txt");
        std::string name = "Vezer Balazs Kende";
        myFile << name;
        myFile.close();
    }catch (std::ofstream::failure& e){
        std::cout << e.what() << std::endl;
    }
    return 0;
}