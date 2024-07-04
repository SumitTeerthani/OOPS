#include <iostream>
using namespace std;

class customer 
{
  string name ;
  int *data;

  public : 
  customer()
  {
    name="Sample Name";
    data =new int ;
    *data=10;
    cout<<"constructor is called"<<endl;
  }
  ~customer() //This is a destructor function , it is called at the last 
  {
    delete data; //destructor dynamically memory ko release kr deta hai 
    cout<<"destructor is called"<<endl;
  }
};

int main ()
{
   customer a1;
}