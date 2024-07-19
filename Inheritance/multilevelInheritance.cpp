#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello, my name is " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthyly_salary()
    {
        cout << "my monthly salary is this " << salary << endl;
    }
};
class Manager : public Employee // it will also have the properties of person
{
public:
    string department;
    Manager(string name, int salary, string department)
    {
        this->name = name;
        this->salary = salary;
        this->department = department;
    }
    void work()
    {
        cout << "I am working in " << department << endl;
    }
};

int main()
{
    Manager A1("Ram",200, "SDE");
    A1.introduce();
    A1.monthyly_salary();
    A1.work();

}