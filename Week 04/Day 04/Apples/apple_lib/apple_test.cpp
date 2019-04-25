//
// Created by vezer on 2019. 04. 25..
//
#include <iostream>
#include <string>
#include <algorithm>
#include "apple_test.h"



std::string getApple(){
    return "apple";
}
int sum (std::vector<int> *Sum){
    int temp = 0;
    for (int i = 0; i < Sum->size() ; ++i) {
        temp += Sum->at(i);
    }return temp;
};

std::string anagram1 = "kar";
std::string anagram2 = "rak";

bool areAnagrams(std::string anagram1,std::string anagram2){

    int word1 = anagram1.size();
    int word2 = anagram2.size();

    if(word1 != word2)
        return false;

    std::sort(anagram1.begin(), anagram1.end());
    std::sort(anagram2.begin(), anagram2.end());

    for (int i = 0; i < word1 ; ++i)
        if(anagram1[i] != anagram2[i])
            return false;


    return true;
}

std::map<char, int> countLetters(std::string word) {
    std::map<char, int> letters;
    for (int i = 0; i < word.size() ; ++i) {
        letters[word[i]]++;
    }
    return letters;
}


