#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I am working" << endl;
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_number << " " << fees << endl;
    }
};

int main()
{
    Student A1("Rohan", 23, 445, 40000); // see we are accessing protected member,also note that first parent contructor is called and then child constructor is called and this is vice versa in destructor case
    A1.display();
}
