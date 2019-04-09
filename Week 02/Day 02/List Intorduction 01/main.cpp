#include <iostream>
#include <string>
#include <vector>
#include <list>


int main() {
    //Create an empty list which will contain names (strings)

    std::vector<std::string> names;

    //Print out the number of elements in the list

    std::cout<< names.size() <<std::endl;
    std::cout<<std::endl;

    //Add William to the list

    names.push_back("William");

    //Print out whether the list is empty or not

    if(names.empty()){
        std::cout<< "Is empty ";
    }else {
        std::cout<<" Not empty "<<std::endl;
    }
    std::cout<<std::endl;
    //Add John to the list

    names.push_back("John");

    //Add Amanda to the list

    names.push_back("Amanda");

    //Print out the number of elements in the list

    std::cout<<names.size()<<std::endl;
    std::cout<<std::endl;

    //Print out the 3rd element

    std::cout<< "Third element: " << names[2] <<std::endl;
    std::cout<<std::endl;

    //Iterate through the list and print out each name
    std::cout<<std::endl;
    for (std::vector<std::string>::iterator it = names.begin(); it!= names.end(); it++){
        std::cout<< *it << std::endl;
    }
    std::cout<<std::endl;

    //Iterate through the list and print


    int a = 1;
    for (std::vector<std::string>::iterator it = names.begin(); it!= names.end(); it++){
        std::cout<<a<<". "<< *it << std::endl;
        a ++;
    }

    //Remove the 2nd element

    names.erase(names.begin()+1);


    //Iterate through the list in a reversed order and print out each name

    std::vector<std::string>::iterator reverse;
    for(reverse = names.end(); reverse >= names.begin(); reverse--){
        std::cout<< *reverse << std::endl;
    }
    
    std::cout<<std::endl;

    names.clear();

    std::cout<<names.size()<< std::endl;








    return 0;
}