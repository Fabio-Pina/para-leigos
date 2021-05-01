// BranchDemo - input two numbers. Go down one path of the
//              program if the first argument is greater
//              than the first or the other path if not

#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int nArg1;
    cout << "Enter argument1: ";
    cin >> nArg1;

    // ...and the second
    int nArg2;
    cout << "Enter argument2: ";
    cin >> nArg2;

    // now decide what to do:
    if(nArg1 > nArg2)
    {
        cout << "Argument 1 is greater than argument 2"
           << endl;
    }
    else
    {
        cout << "Argument 1 is not greater than argument 2"
           << endl;
    }
    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press Enter to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
