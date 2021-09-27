// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Sept 2021
// This program tells you if a year is a leap year

#include <iostream>
#include <string>


int main() {
    // This program tells you if a year is a leap year
    int userYear;
    std::string userYearString;

    // input
    std::cout << "Please enter a year : ";
    std::cin >> userYearString;

    // process and output
    try {
        userYear = std::stoi(userYearString);
        if (userYear % 4 == 0) {
            if (userYear % 100 == 0) {
                if (userYear % 400 == 0) {
                    std::cout << userYear << " is a leap year" <<std::endl;
                } else {
                    std::cout << userYear << " is not a leap year" <<std::endl;
                }
            } else {
                std::cout << userYear << " is a leap year" <<std::endl;
            }
        } else {
            std::cout << userYear << " is not a leap year" <<std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
