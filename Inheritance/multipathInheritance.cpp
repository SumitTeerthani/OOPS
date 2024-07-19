#include <iostream>
using namespace std;

class Human
{
public:
    string name;
    void display()
    {
        cout << "Name : " << name << endl;
    }
};

class Engineer : public virtual Human
{
public:
    string specialization;
    void work()
    {
        cout << "I am specialized in " << specialization << endl;
    }
};

class Youtuber : public virtual Human
{
public:
    int subscribers;
    void contentcreater()
    {
        cout << "I have " << subscribers << " subscribers" << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber // This is multple Inheritance
{
public:
    int salary;
    CodeTeacher(string name, int subscribers, string specialization, int salary)
    {
        this->name = name; // ambiguios mtlb 2 jagah se aarha hai to solve this we add keyword virtual
        this->subscribers = subscribers;
        this->specialization = specialization;
        this->salary = salary;
    }
};

int main()
{
    CodeTeacher c1("Soham", 100000, "C++", 99999);
    c1.display();
}