#include <iostream>
using namespace std;

class customer
{

    string name;
    int acc_no;
    int balance;

public:
    customer() // this is a default constructor
    {
        cout << "constructor is called" << endl;
    }
    customer(string a, int b, int c)
    {
        name = a;
        acc_no = b;
        balance = c;
        cout << "Second constructor was called ";
    }
    //Below is the inline constructor 
    inline customer(string a,int b):name(a),acc_no(b)
    {
        cout<<"Inline constructow was called "<<endl;
    }
};

int main()
{
    customer c1;
    // customer c2("Rajeev",2343,24232);
    customer c3("Kalam",67);
}