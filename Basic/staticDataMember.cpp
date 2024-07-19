#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_no, balance;
    static int total_customer; // yh static data member hai ar saare objects ke liye ek hi data member use hota hai 
     //static data member is attribute of class, it can also be accesed without object bs public mein 
     //daaldo ar ese access krlo -: customer::total_balance=6;

public:
    customer(string name, int acc_no, int balance)
    {
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
    }
    void display()
    {
        cout << name << " " << acc_no << " " << balance << " " << total_customer << endl;
    }
};
int customer::total_customer = 0; // static data member ko initialise krne ka yhi tarika hai

int main()
{
    customer a1("Rohit", 22, 34);
    a1.display();
    customer a2("Rohit", 22, 34);
    a2.display();
}