// This menu-driven program uses a switch statement to carry out
// the appropriate set of actions based on the user's menu choice.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants for membership rates
	const double ADULT_RATE = 120.0;
	const double CHILD_RATE = 60.0;
	const double SENIOR_RATE = 100.0;
	const double STUDENTS_RATE = 90.0;

	int choice;           // Menu choice
	int months;           // Number of months
	double charges;       // Monthly charges

	// Display the menu and get the user's choice
	cout << "   Health Club Membership Menu\n\n";
	cout << "1. Standard Adult Membership\n";
	cout << "2. Child Membership\n";
	cout << "3. Senior Citizen Membership\n";
	cout << "4. Student Membership\n";
	cout << "5. Quit the Program\n\n";
	cout << "Enter your choice: ";
	cin >> choice;

	// Validate and process the menu choice
	if (choice >= 1 && choice <= 4)
	{
		cout << "For how many months? ";
		cin >> months;

		// User can only select from 1 to 36 months
		if (months >= 1 && months <= 36)
		{
			// Set charges based on user input
			switch (choice)
			{
			case 1:	charges = months * ADULT_RATE;
				break;
			case 2:	charges = months * CHILD_RATE;
				break;
			case 3:	charges = months * SENIOR_RATE;
				break;
			case 4: charges = months * STUDENTS_RATE;
				break;
			}

			// Display the monthly charges
			cout << fixed << showpoint << setprecision(2);
			cout << "The total charges are $" << charges << endl;
		}
		else
		{
			cout << "\n";
			cout << "The number of months must be between 1 and 36.\n";
			cout << "Run the program again and select a valid number of months.\n";
		}
	}
	else if (choice != 5)
	{
		cout << "\n";
		cout << "The valid choices are 1 through 5.\n";
		cout << "Run the program again and select one of these.\n";
	}
	return 0;
}
