// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in November 2022
// A program that prints out every RGB value

#include <iostream>

int main() {
    // Prints out every RGB value

    std::cout << "Press Enter to start printing 1000 to 2000:";
    std::cout << std::endl;
    std::cin.get();
    for (int number = 1000; number < 2001; number++) {
        if (number % 10 == 4 || number % 10 == 9) {
            std::cout << number;
            std::cout << std::endl;
        } else {
            std::cout << number << " ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
