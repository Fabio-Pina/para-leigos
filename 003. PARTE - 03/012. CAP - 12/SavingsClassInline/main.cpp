//
//  SavingsClassInline - invoke a member function that's
//                       both declared and defined within
//                       the class Student
//
#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;
#include "Savings.h"

int main(int nNumberofArgs, char* pszArgs[])
{
    Savings s;
    s.accountNumber = 123456;
    s.balance = 0.0;

    // now add something to the account
    cout << "Depositing 10 to account"
         << s.accountNumber << endl;
    s.deposit(10);
    cout << "Balance is " << s.balance << endl;

    cout << "Press ENTER to continue" << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}

