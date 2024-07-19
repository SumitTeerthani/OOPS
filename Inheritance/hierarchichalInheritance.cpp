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

class Teacher : public Human
{
    int salary;
   public:
   Teacher(int salary , string name,int age)
   {
    this->salary=salary;
    this->name=name;
    this->age=age;
   }
      void display()
    {
        cout << name << " " << age << " " << salary<<endl;
    }
};

int main()
{
    Student A1("Rohan", 23, 445, 40000); // see we are accessing protected member,also note that first parent contructor is called and then child constructor is called and this is vice versa in destructor case
    A1.display();
    Teacher A2(83743,"Shyam",34);
     A2.display();
     return 0;
}
