#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void speak()
    {
        cout << "HO HO" << endl;
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    Animal *p;
    p = new Dog();
    p->speak();

    return 0;
}