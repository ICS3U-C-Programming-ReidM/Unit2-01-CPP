// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on February 2025
// This program calculates the area and perimeter of a rectangle with user input

#include <iostream>

int main() {
    // Declare variables for length and width
    int length, width;

    // Get user input for length and width
    std::cout << "What is the length of the rectangle? (cm) ";
    std::cin >> length;
    std::cout << "What is the width of the rectangle? (cm): ";
    std::cin >> width;

    // Calculate the area and perimeter
    int area = length * width;
    int perimeter = (2 * length) + (2 * width);

    // Display the results
    std::cout << "Area is " << area << " cm^2." << std::endl;
    std::cout << "Perimeter is " << perimeter << " cm." << std::endl;

    return 0;
}
