#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

// int2Months() - return the name of the month
const char* const pszMonths[] = {"invalid",
     "January",
     "February",
     "March",
     "April",
     "May",
     "June",
     "July",
     "August",
     "September",
     "October",
     "November",
     "December"};
const char* int2Month(int nMonth)
{
    // first check for a value out of range
    if(nMonth < 1 || nMonth > 12)
    {
        return "invalid";
    }

    // nMonth is valid - return the name of the month
    return pszMonths[nMonth];
}

int main (int nNumberofArgs, char* pszArgs[])
{
cout << "Enter the number of the month do display\n"
     << "(Enter a negative number to quit)" << endl;
     for(;;)
     {
         cout << "Month? ";
         int nMonth;
         cin >> nMonth;
         if (nMonth < 0)
         {
             break;
         }

         cout << "That would be " << int2Month(nMonth) << endl;
     }

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    cout << " Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
    }
