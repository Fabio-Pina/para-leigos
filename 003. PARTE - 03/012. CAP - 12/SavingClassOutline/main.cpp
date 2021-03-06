//
//  SavingsClassOutline - invoke a member function that's
//                        declared within a class but
//                        defined in a separate file
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
#include "Savings.h"

// define the member function Savings::deposit()
// (normally this is contained in a separate file that is
// then combined with a different file that is combined)
double Savings::deposit(double amount)
{
    balance += amount;
    return balance;
}

// the main program
int main(int nNumberofArgs, char* pszArgs[])
{
    Savings s;
    s.accountNumber = 123456;
    s.balance = 0.0;

    // now add somenthing to the account
    cout << "Depositing 10 to the account"
         << s.accountNumber << endl;
         s.deposit(10);
         cout << "Balance is " << s.balance << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results

    cout << "Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

