//Start date: Thursday 1 December 18:42 2022

/*Arnau López | C++ | Library */

#include <iostream>
#include "testLibrary.h"

/******************************************/
/*********Number related functions*********/
/******************************************/

//returns the entered number reversed.
int reverseNumbers(int number) {
    int reversedNumber = 0;
    while (number != 0) {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }
    return reversedNumber;
}

//returns the number of digits of the number included.
int digitCount(int number) {
    if (number < 0)
        number = -1 * number;

    int counter = 0;
    while (number > 0) {
        //number = number / 10;
        number /= 10;
        counter++;
    }
    return counter;
}

//prints all divisible numbers by div1 and div2 between startNum and maxNum -> modify at your own needs.
void isDivisible(int startNum, int maxNum, int div1, int div2) {
    while (startNum <= maxNum) {
        if (startNum % div1 == 0 && startNum % div2 == 0)
            std::cout << startNum << " is divisible by " << div1 << " and " << div2 << "." << std::endl;
        startNum++;
    }
}

//returns true or false value if the input value equals to the stored value.
bool validateNum(int userNum, int validNum) {
    bool isCorrect = true;
    if (userNum != validNum)
        isCorrect = false;

    return isCorrect;
}

void askCorrectNumLimited(int *userNum, int validNum, int maxErrors) {
    int errors = 0;
    int attempts = 4;
    do {
        std::cout << "Number to continue: ";
        std::cin >> *userNum;
        if (*userNum != validNum) {
            errors++;
            attempts--;
            std::cout << "Remaining attempts: " << attempts << std::endl;
            if (attempts == 0)
                std::cout << "exiting program..." << std::endl;
        }
    } while (errors < maxErrors && *userNum != validNum);
    if (errors < maxErrors) {
        *userNum = validNum;
        std::cout << "Number correct continuing..." << std::endl;
    } else {
        std::cout << "Blocked";
        ::exit(0);
    }
}

/******************************************/
/*********Array related functions*********/
/******************************************/

