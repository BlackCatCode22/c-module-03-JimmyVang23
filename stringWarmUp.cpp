// My String Warm Up Program
// TV 9/8/2025

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "\nHello and welcome to My String Warm Up Program! \n";

    string myStrObject = "abc def g h ijk";

    // Understand the index nature of a string object
    // Output the char at index (aka char position 5)
    cout << "\n\n";
    cout << myStrObject[1];
    cout << "\n\n";

    cout << "\n myStrObject is: " << myStrObject << endl;

    // 1. get the length of string
    int lengthOfMyStr = myStrObject.length();
    cout << "\nLength of string: " << lengthOfMyStr << endl;

    // Create a char length for the swap
    char myTempChar;
    for (int i = 0; i <= lengthOfMyStr/2; i++) {

        // cout << "\n i = " << i << " and the char at " << i << " is " << myStrObject[i] << endl;
        // swap the characters
        myTempChar = myStrObject[i];
        myStrObject[i] = myStrObject[lengthOfMyStr - i - 1];
        myStrObject[lengthOfMyStr - i - 1] = myTempChar;

    }

    cout << "\n the reversed string is: \n" << myStrObject << endl;

    cout << "\n myStrObject is: " << myStrObject << endl;

    // Create a 2D Array
    int numberGrid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    cout << numberGrid[2][0];




    return 0;
}