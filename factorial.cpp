// Copyright (c) 2022 Hertz All rights reserved.
//
// Created by: Hertz Antonella
// created on: Apr, 22, 2022
// This program asks the user for a whole number
// then displays the factorial of the numbers from 0 up to
// that user number.
#include <iostream>

int main() {
  // initialize the loop counter and factorialAnswer.
  int counter = 0;
  int factorialAnswer = 1;
  int userNum;
  std::string userNumString;

  // get the user number as a string
  std::cout << "Enter a whole number: ";
  std::cin >> userNumString;
  std::cout << std::endl;

  try {
    // convert from string to int
     userNum = std::stoi(userNumString);

    if (userNum >= 0) {
      // calculate the factorial of all numbers from 0 to user number
           do {
               counter++;
               factorialAnswer = factorialAnswer * counter;
               std::cout <<"Tracking " << counter <<" time through the loop.\n";
            }   while (counter < userNum);

            // display the factoialAnswer to the user
             std::cout <<userNum << "! = " << factorialAnswer << std::endl;
        } else {
            std::cout << " please enter a positive number.\n";
        }
    // determines if the the answer is a number
  } catch (std::invalid_argument) {
    // The user did not enter a number.
    std::cout << " invalid input.\n";
  }
}
