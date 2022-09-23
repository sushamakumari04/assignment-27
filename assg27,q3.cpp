//3. Write a C++ program to add two complex numbers using operator overloaded by a friend function.
#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
    Complex(){}
    Complex(int x,int y)
    {
     a=x;
     b=y;
    }
    void setData(int x,int y)
    {
     a=x;
     b=y;
    }
    void display()
    {
     cout<<"real = "<<a<<" img = "<<b<<endl;
    }
    friend  Complex operator+(Complex ,Complex );
};

Complex operator+(Complex c1,Complex c2)
{
Complex temp;
temp.a=c1.a+c2.a;
temp.b=c1.b+c2.b;
return temp;
}
int main()
{
Complex c1(2,3),c2(5,6),c3;
c1.display();
c2.display();
c3=c1+c2;
c3.display();
}
