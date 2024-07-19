#include <iostream>
using namespace std;

class customer
{
    string name;
    int acc_num, balance;
    static int total_customer; // using static keyword to create static data member
    static int total_balance;

public:
    customer(string a, int b, int c)
    {
        name = a;
        acc_num = b;
        balance = c;
        total_customer++;
        total_balance += balance;
    }

    static void aceStatic()
    { // it is a static member function ar yh sirf stati members ko hi call kr skta hai it cannot access name,acc_no
        cout << "Total customer: " << total_customer << endl;
        cout << "Total balance:" << total_balance << endl;
        // cout<<name<<endl;
    }
    void deposit(int amount)
    {
        balance += amount;
        total_balance += amount;
    }
    void withdraw(int amount)
    {
        if (amount <= balance and amount > 0)
        {
            balance -= amount;
            total_balance -= amount;
        }
    }

    void display()
    {
        cout << name << " " << acc_num << " " << balance << " " << total_customer << endl;
    }
};
int customer::total_customer = 0; // to initialise static member we initialise like this .
int customer::total_balance = 0;  // to initialise static member we initialise like this .
int main()
{
    customer c1("abc", 123, 1000);
    c1.display();
    customer c2("def", 13, 10000);
    c1.deposit(500);
    c2.withdraw(300);
    c2.display();

    // customer::total_customer = 5; this can't be done bcz total_customer is private
    customer::aceStatic(); // bcz aceStatic is a Class part so we can call it in this way
    c1.display();
}