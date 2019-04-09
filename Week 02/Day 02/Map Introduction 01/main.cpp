#include <iostream>
#include <map>
#include <string>
#include <vector>

int main()
{

    //Create an empty map where the keys are integers and the values are characters

    std::map<int, std::string> firstmap;

    //Print out whether the map is empty or not
    //97	a
    //98	b
    //99	c
    //65	A
    //66	B
    //67	C

    if(firstmap.empty()){
        std::cout<< "Is Empty"<<std::endl;
    }else {
        std::cout<< "Not Empty"<<std::endl;
    }
    std::cout<<std::endl;

   //Add the following key-value pairs to the map

    firstmap.insert({97, "a"});
    firstmap.insert({98, "b"});
    firstmap.insert({99, "c"});
    firstmap.insert({65, "A"});
    firstmap.insert({66, "B"});
    firstmap.insert({67, "C"});

    //Print all the keys
    //Print all the values
    std::cout<<"Key\tElement"<<std::endl;
    for(std::map<int, std::string>::iterator i = firstmap.begin(); i!=firstmap.end(); i++){
        std::cout<<i->first<<"\t"<<i->second<<std::endl;
    }

    //Add value D with the key 68

    firstmap.insert({68, "D"});
    std::cout<<std::endl;

    //Print how many key-value pairs are in the map

    std::cout<<firstmap.size()<<std::endl;

    //Print the value that is associated with key 99

    std::cout<<std::endl;

    std::map<int, std::string>::iterator it;
    it = firstmap.find(99);
    if(it != firstmap.end()){
        std::cout<<it->second<<std::endl;
    }
    std::cout<<std::endl;

    //Remove the key-value pair where with key 97


    std::map<int, std::string>::iterator it2;
    it2 = firstmap.find(97);
    if (it2 != firstmap.end()){
        it2 = firstmap.erase(it2);
    }







    //Print whether there is an associated value with key 100 or not
    std::cout<<std::endl;

    std::map<int, std::string>::iterator it3;
    it3 = firstmap.find(100);
        if (it3 != firstmap.end()){
            std::cout<< "Value found"<<std::endl;
        }else{
            std::cout<<"Value haven't found"<<std::endl;
        }



            return 0;
}

