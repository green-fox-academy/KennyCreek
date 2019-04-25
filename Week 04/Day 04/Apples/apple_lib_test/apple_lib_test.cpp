//
// Created by vezer on 2019. 04. 25..
//

#include <gtest/gtest.h>
#include <iostream>
#include "apple_test.h"

TEST(test_check, test_apple){
    std::string result = getApple();

    ASSERT_EQ(result, "apple");
}

TEST(test_check, test_sum){
    // Arrange
    std::vector<int> elements;
    // Act
    int result = sum(&elements);
    //Assert
    ASSERT_EQ(result, 0);
}

TEST(test_check, test_sum2){
    //Arrange
    std::vector<int> elements = {5};
    //Act
    int result = sum(&elements);
    //Assert
    ASSERT_EQ(result, 5 );
}

TEST(test_check, test_sum3){
    //Arrange
    std::vector<int> elements = {10, 5, 15, 30};
    //Act
    int result = sum(&elements);
    //Assert
    ASSERT_EQ(result, 60);
}

TEST(test_check, test_anagrams) {
    //Arrange
    bool areAnagrams;
    //Act
    bool result = areAnagrams;
    //Assert
    ASSERT_EQ(result, false);
}

TEST(test_check, test_countLetters){
    //Arrange
    std::string word = "kkkkkkkiraly";
    //Act
    std::map<char, int> letters;
    letters = countLetters(word);
    //Assert
    ASSERT_EQ(letters['k'],7);
    ASSERT_EQ(letters.size(), 6);
    
}