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
    Student s1;
    s1.name = "Sumit";
    s1.age = 21;
    s1.rollNo = 21126049;
    //s1.grade = "A+";
    cout << s1.grade;
}