//Start date: Thursday 1 December 18:42 2022

/*Arnau López | C++ | Library */

/******************************************/
/*********Constants and variables*********/
/******************************************/


/******************************************/
/*********Number related functions*********/
/******************************************/

//returns the entered number reversed.
int reverseNumbers(int number);

//returns the number of digits of the number included.
int digitCount(int number);

//prints all divisible numbers by div1 and div2 between startNum and maxNum -> modify at your own needs.
void isDivisible(int startNum, int maxNum, int div1, int div2);

//returns true or false value if the input value equals to the stored value.
bool validateNum(int userNum, int validNum);

//ask with limited inputs the correct number
void askCorrectNumLimited(int *userNum, int validNum, int maxErrors);

//simple function to draw a custom rectangle
void drawRectangle(int height, int width, char symbol);

void drawTriangle(int length, char symbol);

void drawTriangleInv(int length, char symbol);

void drawSemiRomb(int length, char symbol);

/******************************************/
/*********Array related functions*********/
/******************************************/