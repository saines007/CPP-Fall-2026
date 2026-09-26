// This program converts seconds to minutes and seconds.
// It uses integer division and the modulus operator.
#include <iostream>
using namespace std;

int main()          
{
   int totalSeconds = 500000,     // Number of seconds to be converted
      days,                       // Number of days in total Seconds
      hours,                      // Number of hours remaining
      minutes,                    // Number of minutes remaining
	   seconds;                    // Number of seconds remaining 
      
   // Calculate the number of days
   days = totalSeconds / 86400;

   // Calculate the number of hours
   hours = (totalSeconds % 86400) / 3600;
   
   // Calculate the number of minutes
   minutes = (totalSeconds % 3600) / 60;
  
   // Calculate the remaining seconds
   seconds = totalSeconds % 60;
  
   // Display the results
   cout << totalSeconds << " seconds is equivalent to: \n";
   cout << days << " days, " << hours << " hours, "; 
   cout << minutes << " minutes and " << seconds << " seconds. \n";
   
   // 500, 5000, 50000, and 500000 were all tested
   return 0;
}