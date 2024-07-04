#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int age, rollNo;
    string grade;
};

int main()
{
    Student *s = new Student;
    (*s).name = "Sumit";
    (*s).age = 19;
    (*s).rollNo = 21126049;
    s->grade = "B+";
    cout << "Name is " << (*s).name << endl;
    cout << "Age is " << s->age << endl;
}