// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program lets the user see if they can date a grandchild

#include <iostream>
#include <random>
#include <string>

int main() {
    // This program lets the user guess an integer from 1-10
    std::string yearAsString;
    int yearAsInteger;

    // Input
    std::cout << "Enter the year: ";
    std::cin >> yearAsString;

    // Process and Output
    try {
        yearAsInteger = std::stoi(yearAsString);
        if (yearAsInteger % 4 == 0) {
            if (yearAsInteger % 100 == 0) {
                if (yearAsInteger % 400 == 0) {
                    std::cout << "\nIt is a leap year!" << std::endl;
                } else {
                    std::cout << "\nIt is a common year!" << std::endl;
                }
            } else {
                std::cout << "\nIt is a leap year!" << std::endl;
            }
        } else {
            std::cout << "\nIt is a common year!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << yearAsString
        << " is not a valid year" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
