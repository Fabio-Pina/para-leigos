//
//  DefaultCopyConstructor - demonstrate that the default
//                        copy constructor invokes the
//                        copy constructor for each member
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student
{
  public:
    // conventional constructor
    Student(const char *pName = "no name", int ssld = 0)
    : name(pName), id(ssld)
    { cout << "Constructed " << name << endl;}

    // copy constructor
    Student(Student& s)
     : name("Copy of " + s.name), id(s.id)
     { cout << "Constructed " << name << endl;}

     ~Student(){ cout << "Destructing " << name << endl;}

  protected:
    string name;
    int id;
};

class Tutor
{
  public:
    Tutor(Student& s)
      : student(s), id(0)
      { cout << "Constructing Tutor object" << endl;}
  protected:
    Student student;
    int id;
};

void fn(Tutor tutor)
{
   cout << "In function fn()" << endl;
}

int main(int argcs, char* pArgs[])
{
    Student scruffy("Scruffy");
    Tutor tutor(scruffy);
    cout << "Calling fn()" << endl;
    fn(tutor);
    cout << "Back in main()" << endl;

     // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
