#include <iostream>
using namespace std;

// class Human
// {
//    private:
//    int a;
//    protected:
//    int b;
//    public:
//    int c;
// };

// int main (){
//    Human a1;
//      //  a1.a=19; //this will show error because you are accesing private member
// }

class Human
{
    string religion , color;
    protected:
    string name;
    int age, weight;
};

class Student : public Human
{
    int roll_number, fees;
};

int main()
{
    Student A;
   // A.name = "Rahul";
}