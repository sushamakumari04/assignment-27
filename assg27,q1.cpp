/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. ==    */
#include<iostream>
using namespace std;

class Complex
{
private:
    int a,b;
public:
     Complex()
     {

     }
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
      cout<<"real = "<<a<<"  img = "<<b<<endl;
     }
     Complex operator+(Complex s)
     {
      Complex temp;
      temp.a=a+s.a;
      temp.b=b+s.b;
      return temp;
     }
     Complex operator-(Complex s)
     {
      Complex temp;
      temp.a=a-s.a;
      temp.b=b-s.b;
      return temp;
     }
    Complex operator*(Complex s)
     {
      Complex temp;
      temp.a=a*s.a;
      temp.b=b*s.b;
      return temp;
     }
     Complex operator==(Complex s)
     {
      if(a==s.a&&b==s.b)
        {
         cout<<"Complex  number are equal"<<endl;
         }
      else
         cout<<"Complex  number are not equal"<<endl;
     }


};
int main()
{
Complex c1,c2,c3,c4,c5,c6;
c1.setData(2,3);
c2.setData(2,3);

c1.display();
c2.display();

c3=c1+c2;
c3.display();

c4=c1-c2;
c4.display();

c5=c1*c2;
c5.display();

c1==c2;


return 0;
}
