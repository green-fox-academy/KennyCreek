#include <iostream>
#include <fstream>
#include <string>

// Create a function that takes 3 parameters: a path, a word and a number
// and is able to write into a file.
// The path parameter should be a string that describes the location of the file you wish to modify
// The word parameter should also be a string that will be written to the file as individual lines
// The number parameter should describe how many lines the file should have.
// If the word is "apple" and the number is 5, it should write 5 lines
// into the file and each line should read "apple"
void Parameters (std::string path, std::string word, int x);
int main() {

    Parameters("../MultipleLines.txt", "apple\n", 5);
    return 0;
}

void Parameters (std::string path, std::string word, int x){

    std::ofstream myFile (path);


    if(myFile.is_open()){
        for (int i = 0; i < x; ++i) {
            myFile << word;

        }myFile.close();



    }else{
        std::cout<< "Can't open"<<std::endl;
    }



}