#include <iostream>
using namespace std;

class Human
{
    public :
    string name;
};


class Engineer:public Human
{
    public:
    string specialization ;
    void work()
    {
        cout<<"I am specialized in "<<specialization<<endl;
    }
};

class Youtuber:public Human
{
    public:
    int subscribers;
    void contentcreater(){
            cout<<"I have "<<subscribers<<" subscribers"<<endl;
    }
};

class CodeTeacher:public Engineer,public Youtuber  //This is multple Inheritance
{
    public:
    int salary ;
     CodeTeacher(string name,int subscribers,string specialization,int salary)
    {
        this->name=name;
        this->subscribers=subscribers;
        this->specialization=specialization;
        this->salary=salary;

    }
    void showCase()
    {
        cout<<"My name is "<<name<<endl;
        contentcreater();
        work();
    }
};

int main()
{
    CodeTeacher c1("Saurabh",100000,"C++");
    c1.showCase();

}