#include <iostream>

using namespace std;

class Student
{
private:
    string name;
    int age;
    int rollNo;
    string grade;
    // getter and setter
    /* Getters: These are the methods used in Object-Oriented Programming (OOPS) which helps
    to access the private attributes from a class. Setters: These are the methods used in OOPS
    feature which helps to set the value to private attributes in a class.*/
public:
    void setName(string n)
    {
        name = n;
    }
    void setAge(int n)
    {
        age = n;
    }
    void setRollNo(int n)
    {
        rollNo = n;
    }
    void setGrade(string n)
    {
        grade = n;
    }
    // getters
    void getName()
    {
        cout << name << endl;
    }
    void getage()
    {
        cout << age << endl;
    }
    void getRollNo()
    {
        cout << rollNo << endl;
    }
    void getGrade()
    {
        cout << grade << endl;
    }
};

int main()
{
    Student s1;
    s1.setAge(19);
    s1.getage();
}