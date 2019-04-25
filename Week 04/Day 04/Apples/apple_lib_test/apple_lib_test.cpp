//
// Created by vezer on 2019. 04. 25..
//

#include <gtest/gtest.h>
#include <iostream>
#include "apple_test.h"

TEST(test_check, test_apple){
    apple_test check;

    std::string result = check.getApple();

    ASSERT_EQ(result, "apple");
}