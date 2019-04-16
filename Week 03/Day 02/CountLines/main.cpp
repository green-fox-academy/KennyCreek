#include <iostream>
#include <fstream>
#include <string>
int Count(std::string CountLine);
int main () {
    // Write a function that takes a filename as string,
    // then returns the number of lines the file contains.
    // It should return zero if it can't open the file

    std::string CL ("../CountLine.txt");
    std::cout<< Count(CL) << std::endl;



    return 0;
}

int Count(std::string CountLine){

    std::ifstream Filestream(CountLine);
    std::string line;
    int counter = 0;
    while (!Filestream.eof()){
        std::getline(Filestream, line);
        counter++;

    }
    return counter;



}