//Start date: Thursday 1 December 18:42 2022

/*Arnau López | C++ | Library */
#include <iostream>
#include "testLibrary.h"

/******************************************/
/*********Constants and variables*********/
/******************************************/


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

/******************************************/
/*********Array related functions*********/
/******************************************/

