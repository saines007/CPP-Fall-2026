// This program uses 2 functions: a void function with a reference 
// variable as a parameter, and a value-returning function.
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

// Function prototypes
void getNum(int&);
void getNum(double&);
int doubleNum(int);
double doubleNum(double);

int main()
{
    int value;
    double value2;

    // Call getNum to get a number and store it in value
    getNum(value);

    // Call doubleNum, passing it the number stored in value
    // Assign value the number returned by the function
    value = doubleNum(value);

    // Display the resulting number
    cout << "That value doubled is " << value << endl;

    // Call getNum to get a number and store it in value2
    getNum(value2);

    // Call doubleNum, passing it the number stored in value2
    // value2 becomes number returned by the function
    value2 = doubleNum(value2);

    // Display the resulting number
    cout << "The doubled value is: " << value2 << endl;

    return 0;
}

/**********************************************************
 *                         getNum                         *
 * This function stores user input data in main's value   *
 * variable by using a reference variable as a parameter. *
 *********************************************************/
void getNum(int& userNum)
{
    string input;
    char leftover;

    cout << "Enter a non-negative integer: ";

    while (true)
    {
        getline(cin, input);
        istringstream stream(input);

        if ((stream >> userNum) &&
            !(stream >> leftover) &&
            userNum >= 0)
        {
            break;
        }

        cout << "Error! Please enter only a non-negative whole number: ";
    }
}

/***********************************************************
 *                        doubleNum                        *
 * This function doubles the number it receives as an      *
 * argument and returns it to main thru a return statement.*
 ***********************************************************/
int doubleNum(int number)
{
    return number * 2;
}

/**********************************************************
 *                         getNum                         *
 * This function stores user input data in main's value   *
 * variable by using a reference variable as a parameter. *
 *********************************************************/
void getNum(double& userNum)
{
    string input;
    char leftover;

    cout << "Enter a non-negative decimal number: ";

    while (true)
    {
        getline(cin, input);
        istringstream stream(input);

        if ((stream >> userNum) &&
            !(stream >> leftover) &&
            userNum >= 0)
        {
            break;
        }

        cout << "Error! Please enter only a non-negative number: ";
    }
}

/***********************************************************
 *                        doubleNum                        *
 * This function doubles the number it receives as an      *
 * argument and returns it to main thru a return statement.*
 ***********************************************************/
double doubleNum(double number)
{
    return number * 2;
}