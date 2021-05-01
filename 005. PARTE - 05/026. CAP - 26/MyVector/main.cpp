#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "templatevector.h"
using namespace std;

int main(int argc, char* pArgs[])
{
    TemplateVector <int> myVector = {10, 20, 30, 40, 50};

    for(int i = 0; i < myVector.size(); i++)
    {
        cout << i << ":" << myVector.get() << "\n";
    }

    cout << "Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
