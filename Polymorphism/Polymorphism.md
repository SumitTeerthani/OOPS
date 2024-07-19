**Polymorphism**
>meaning many form
 
 a male is son , father, husband and brother . So different forms are there for same person .

 it is of 2 type 
 >compiler time - it checks the syntax and compile into machine executable code 
>runtime-machine execution time. (like i/0 yh hai runtime mein error dega generally and array out of bound jane pr yh error deta hai )

Compiler time is of 2 types -: function overloading,operator overloading 
Runtime is of one type -: virtual funtion . 

class Area
{
    public:
    int calculatearea(int r)
    {
        return 3.14*r*r;
    }
    int calculatearea(int l,int b)
    {
        return l*b;
    }
}
the above example is of function overloading . The onl difference is between their parameters . This is polymorphism 


>Operator overloading
int a=10,
int b=1;
cout<<a+b; #gives output as 11 
string s1="Sumit";
string s2="Teerthani";
cout<<s1+s2 ; #gives output as Sumit Teerthani so + operator add integers and string also so this is called operaor overloading 

class Complex
{
    int real, img;

public:
    Complex(){};

    Complex(int real, int img)
    {
        this->real = real;
        this->img = img;
    };
    void display()
    {
        cout << real << " +i" << img << endl;
    };
    Complex operator+(Complex &c) #operator overloading
    {
        Complex ans;
        ans.real = real + c.real;
        ans.img = img + c.img;
        return ans;
    };
};

*Virtual Funtion*
class Animal
{
public:
    virtual void speak() #agr idhr virtual nhi lagayenge th fr yh vala speak print hoga 
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