#include <iostream>
using namespace std;

// student,boy ,girl,male,female

class Student
{
public:
    void print()
    {
        cout << "I am a Student" << endl;
    }
};
class Male
{
public:
    void maleprint()
    {
        cout << "I am a Male" << endl;
    }
};
class Female
{
public:
    void femaleprint()
    {
        cout << "I am a Female" << endl;
    }
};


class Boy:public Student, public Male
{
public:
    void boyprint()
    {
        cout << "I am a Boy" << endl;
    }
};

class Girl:public Student, public Female
{
public:
    void girlprint()
    {
        cout << "I am a Girl" << endl;
    }
};


int main()
{

    Girl g1;
    g1.girlprint();
    g1.print();
    g1.femaleprint();
}