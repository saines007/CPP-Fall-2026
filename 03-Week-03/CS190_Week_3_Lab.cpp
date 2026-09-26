// This program demonstrates using the C++ time function
// to provide a "seed" for the random number generator.
#include <iostream>
#include <cstdlib>       // Header file needed to use srand and rand
#include <ctime>         // Header file needed to use time
#include <iomanip>		// Header file needed to use setw
using namespace std;

int main()
{
	unsigned seed;         // Random generator seed

    // Use the time function to get a "seed" value for srand
	seed = time(0);
	srand(seed); 
	
	// Display only 0's and 1's in a table of 3 rows and 3 columns
	cout << right << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 << endl;

	cout << right << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 << endl;

	cout << right << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 ;
	cout << setw(5) << rand() % 2 << endl;

	return 0;
}