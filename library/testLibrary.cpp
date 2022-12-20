//Start date: Thursday 1 December 18:42 2022

/*Arnau López | C++ | Library */

#include <iostream>
#include <iomanip>
#include "testLibrary.h"
#include <stdlib.h>

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
        std::exit(0);
    }
}

//simple function to draw a custom rectangle
void drawRectangle(int height, int width, char symbol) {
    for (int i = 0; i < height; ++i) { //controls height
        for (int j = 0; j < width; ++j) { //controls width
            std::cout << std::setw(3) << symbol; // assigns the width of 3 fields at every characters
        }
        std::cout << std::endl;
    }
}

//just a simple custom triangle
void drawTriangle(int length, char symbol) {
    for (int i = 0; i <= length; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }
}

//just a simple custom triangle (inverted)
void drawTriangleInv(int length, char symbol) {
    for (int i = length; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }
}

//just a romb / 2
void drawSemiRomb(int length, char symbol) {
    for (int i = 0; i <= length; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }

    for (int i = length; i >= 1; --i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << std::setw(2) << symbol;
        }
        std::cout << std::endl;
    }
}

/******************************************/
/*********Array related functions*********/
/*****************************************/

int comparator(const void *x, const void *y) {
    return (*(int *) x - *(int *) y);
}

//use a typedef
void SortArrayMinToMax(int *array, int arraySize, const int ARRAY_MAX_SIZE) {
    while (arraySize > ARRAY_MAX_SIZE) {
        std::cout << "Expected: size cannot be bigger than MAX SIZE" << std::endl;
        std::cin >> arraySize;
    }
    //sorting algorithm
    qsort(array, arraySize, sizeof(int), comparator);
    //print the array values
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }
}

void CreateAndSortArrayMinToMax(int *array, int arraySize, const int ARRAY_MAX_SIZE) {
    while (arraySize > ARRAY_MAX_SIZE) {
        std::cout << "Expected: size cannot be bigger than MAX SIZE" << std::endl;
        std::cin >> arraySize;
    }
    //add values to the array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Input the array numbers: " << std::endl;
        std::cin >> array[i];
    }
    //sorting algorithm
    qsort(array, arraySize, sizeof(int), comparator);
    //print the array values
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }

}

void UserCreateAndSortArrayMinToMax(int *array) {
    int arraySize;
    int ARRAY_MAX_SIZE;

    std::cout << "Max size:" << std::endl;
    std::cin >> ARRAY_MAX_SIZE;
    std::cout << "Size:" << std::endl;
    std::cin >> arraySize;

    while (arraySize > ARRAY_MAX_SIZE) {
        std::cout << "Expected: size cannot be bigger than MAX SIZE" << std::endl;
        std::cin >> arraySize;
    }
    //add values to the array
    for (int i = 0; i < arraySize; ++i) {
        std::cout << "Input the array numbers:" << std::endl;
        std::cin >> array[i];
    }
    //sorting algorithm
    qsort(array, arraySize, sizeof(int), comparator);
    //print the array values
    for (int i = 0; i < arraySize; i++) {
        std::cout << array[i] << std::endl;
    }
}