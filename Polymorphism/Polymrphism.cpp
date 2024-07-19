#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Area
{
public:
    int calculatearea(int r)
    {
        return 3.14*r * r;
    }
    int calculatearea(int l, int b)
    {
        return l * b;
    }
};

int main()
{
    Area A1, A2;
    cout << A1.calculatearea(5) << endl;
    cout << A2.calculatearea(3, 4); //Funtion overLoading
    return 0;
}