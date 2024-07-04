#include <iostream> 
using namespace std;
//file ke name mein hum & nhi lekr aa skte 
class customer
{
  string name;
  int *data;

 public:
 customer()
 {
   name="4";
   cout<<"constructor is "<<name<<endl;
 }
 customer(string name)
 {
    this->name=name;
    cout<<"constructor is "<<name<<endl;

 }
  
  ~customer()
  {
   cout<<"destructor is "<<name<<endl; // ismein app dekhoge ki destroctor reverse order mein call hote wrt constructor
  }

};

int main ()
{
   customer a1("1"),a2("2"),a3("3"); //pehle a1 create hua fr a2 and then a3 
   customer *a4=new customer; //yh apne ap release nhi hoga isko delete krne ke liye algsse command chalani padegi
   delete a4;
   
}
