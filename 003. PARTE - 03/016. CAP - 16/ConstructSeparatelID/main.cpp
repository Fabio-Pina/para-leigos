//
//  ConstructSeparateID - failed attempt to init data member
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int nextStudentId = 1000;
class StudentId
{
  public:
  // default constructor assigns id's id
  StudentId()
  {
      value = nextStudentId++;
      cout << "take next student id " << value << endl;
  }

  // int constructor allows user to assign id
  StudentId(int id)
  {
      value = id;
      cout << "assign student id " << value << endl;
  }
  ~StudentId(){cout << "destructing " << value << endl;}
  protected:
    int value;
};

class Student
{
  public:
    Student(const char *pName, int ssld)
    {
        cout << "constructing student " << pName << endl;
        name = pName;
        // don't try this at home kids. It doesn't work
        StudentId id(ssld); // construct a student id
    }
  protected:
    string name;
    int value;
};

int main(int argcs, char* pArgs[])
{
    Student s("Jack", 1234);
    cout << "This message from main" << endl;

    // wait until user is ready before terminating program
    // to allow the user to see the program results
    cout << "Press ENTER to continue..." << endl;
    cin.ignore(10, '\n');
    cin.get();
    return 0;
}
