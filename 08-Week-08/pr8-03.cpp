
// This program reads employee work hours and pay rates from a file. 
// It stores the info in arrays, calculates gross pay for hours worked,
// and displays totals and averages.  
#include <iostream>
#include <fstream>
#include <iomanip>  // Preprocessor for formatting output.
#include <string>   // Preprocessor for formatting output.
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;  // Sets number of employees
    int hours[NUM_EMPLOYEES];     // Holds each employee's hours
    double payRate[NUM_EMPLOYEES]; // Holds each employee's hourly pay rate.
    int count = 0;                // Loop control variable counts 
                                  // how many data items have been read in
    ifstream inputFile;           // Input file stream object

    // Open the data file.
    inputFile.open("workLab.dat");

    if (!inputFile)
    {
        cout << "Error opening data file\n";
    }
    else
    {
        // Read the numbers from the file into the array. When we exit
        // the loop, count will hold the number of items read in.
        // Each record contains hours worked followed by pay rate.
        while (count < NUM_EMPLOYEES &&
               inputFile >> hours[count] >> payRate[count])
        {
            count++;
        }

        // Close the file.
        inputFile.close();

        // Display the contents of the array.
        // The display loop also calculates gross pay and totals.
        cout << fixed << setprecision(2); // Displays floating-point values to two decimal places.
        cout << "The hours worked by each employee and each employee's total gross pay are:\n\n";

        double totalHours = 0.0;    // Accumulates the total hours worked.
        double totalGrossPay = 0.0; // Accumulates the total gross pay.

        // Display column headings for the employee report.
        cout << left << setw(12) << "Employee"
             << right << setw(14) << "Hours Worked"
             << setw(14) << "Gross Pay" << endl;

        // Separate the headings from the employee data to create table/columns.
        cout << string(40, '-') << endl;

        for (int employee = 0; employee < count; employee++)
        {
            // Display the employee label and hours in aligned columns.
            cout << left << setw(12) << ("Employee " + to_string(employee + 1))
                 << right << setw(14) << hours[employee];

            // Calculates the employee's gross pay.
            double grossPay = hours[employee] * payRate[employee];

            // Display gross pay in its own column.
            cout << "$" << setw(13) << grossPay << endl;

            totalHours += hours[employee]; // Accumulates total hours in the display loop.
            totalGrossPay += grossPay; // Accumulates total gross pay in the display loop.
        }

        // Separate the employee data from the totals to close the table/columns.
        cout << string(40, '-') << endl;

        // Display total hours and total gross pay in columns.
        cout << left << setw(12) << "Total"
             << right << setw(14) << totalHours
             << "$" << setw(13) << totalGrossPay << endl;

        // Calculates and displays averages if data is available.
        if (count > 0)
        {
            double averageHours = totalHours / count; // Calculates average hours as a floating-point value.
            double averageGrossPay = totalGrossPay / count; // Calculates average gross pay as a floating-point value.

            cout << endl;
            cout << "Average hours worked: " << averageHours << endl; // Displays average hours worked.
            cout << "Average gross pay: $" << averageGrossPay << endl; // Displays average gross pay.
        }
        else
        {
            cout << "No employee records were found. Please try again.\n"; // Handles a file with no employee records.
        }
    }

    return 0;
}