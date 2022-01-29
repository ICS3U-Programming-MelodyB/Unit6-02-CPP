// Copyright (c) 2022 Melody Berhane All rights reserved.
//
// Created by: Melody Berhane
// Created on: Jan. 28, 2022
// This program uses a for loop to generate and
// print random numbers in a list, then
// displays the largest value

#include <iostream>
#include <array>
#include <random>
#include <ctime>

// this function calculates the largest value in the array of elements
template <size_t MAX_ARRAY_SIZE>
int FindMaxValue(std::array<int, MAX_ARRAY_SIZE> ranNums) {
    int max = ranNums[0];

    for (int counter = 0; counter < ranNums.size(); counter++) {
        if (max < ranNums[counter]) {
            max = ranNums[counter];
        }
    }
    return max;
}


int main() {
    // declaring constants
    const int MAX_ARRAY_SIZE = 10;
    const int MIN_NUM = 0;
    const int MAX_NUM = 100;

    // initializing counter
    int counter = 0;

    // declaring variables
    std::array<int, MAX_ARRAY_SIZE> ranNumsUser;
    int maxUser;

    // insert comment here
    srand(time(NULL));

    // display opening message
    std::cout << "This program generates a list of random ";
    std::cout << "numbers between 0 and 100, ";
    std::cout << "then determines the largest number.";
    std::cout << std::endl;
    std::cout << std::endl;

    // displays random numbers and calculates average
    for (counter = 0; counter < MAX_ARRAY_SIZE; counter++) {
        int randomNumber = (rand() % (MIN_NUM, MIN_NUM + MAX_NUM));

        ranNumsUser[counter] = randomNumber;
        std::cout << ranNumsUser[counter];
        std::cout << " added to the list at position " << counter;
        std::cout << std::endl;
    }

    maxUser = FindMaxValue(ranNumsUser);
    std::cout << std::endl;
    std::cout << "The max value is: " << maxUser;
}
