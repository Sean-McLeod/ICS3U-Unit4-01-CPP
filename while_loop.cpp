// Copyright (c) 2020 Sean McLeod All rights reserved

// Created by Sean McLeod
// Created on December 2020
// This program can add all the whole numbers up to that number

#include <iostream>
#include <string>

int main()  {
    // this function can tell the user the total added number

    std::string positiveIntegerString;
    int positiveInteger;
    int sum = 0;
    int loopCounter = 0;

    std::cout << "This program can add up from 0 to the number you type."
              << "\n" << "For example, 5: 1+2+3+4+5=15" << "\n" << std::endl;

    // input
    std::cout << "Enter in a positive integer: " << std::endl;
    std::cin >> positiveIntegerString;
    std::cout << "" << std::endl;

    // process and output
    try {
        positiveInteger = std::stoi(positiveIntegerString.c_str());

        if (positiveInteger > 0) {
            while (loopCounter <= positiveInteger) {
                sum = sum + loopCounter;
                loopCounter = loopCounter + 1;
            }
            std::cout << "The sum of numbers from 0 to " << positiveInteger
                      << " is " << sum << std::endl;

        } else {
            std::cout << "This is a negative integer" << std::endl;
        }
        }
    catch (std::invalid_argument) {
        std::cout << "This is not an integer" << std::endl;
    }
}
