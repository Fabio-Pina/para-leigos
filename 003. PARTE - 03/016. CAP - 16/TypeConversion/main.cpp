//
//  TypeConversion - demonstrate the implicit conversion
//                   of one type to another;
//                   This program also demonstrates the
//                   use of the C++ '11 keyword explicit.
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Complex
{
  public:
      Complex() : dReal(0.0), dlmag(0.0)
      { cout << "invoke default constructor " << endl;}
      /*explict*/ Complex(double _dReal)
      : dReal(_dReal), dlmag(0.0)
      { cout << "invoke real constructor " << dReal << endl;}
      Complex(double _dReal, double _dlmag)
      : dReal(_dReal), dlmag(_dlmag)
      {
          cout << "invoke complex constructor " << dReal
               << "," << dlmag << endl;
      }

      double dReal;
      double dlmag;
};

int main(int argcs, char* pArgs[])
{
    Complex c1, c2(1.0), c3(1.0, 1.0);

    // constructor can be used to convert from one type
    // to another
    c1 = Complex(10.0);

    // the following conversion work even if explicit
    // is uncommented
    c1 = (Complex)20.0;
    c1 = static_cast < Complex > (30.0);

    // the following implicit conversions work if the
    // explicit is commented out
    c1 = 40.0;
    c1 = 50;

    cout << "Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
