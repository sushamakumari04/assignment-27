/* 7. Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}
Overload the following operators as member or friend:
a) Unary ++ (pre and post both)
b) Overload as friend functions: operators << and >>.
Output- */
#include<iostream>
using namespace std;

class fraction
{
private:
    long numerator;
    long denominator;
public:
    fraction()
    {
     numerator=0;
     denominator=0;
    }
    void setfraction(long n,long d)
    {
     numerator=n;
     denominator=d;
    }
    void display()
    {
     cout<<"fraction = "<<numerator<<"/"<<denominator<<endl;
    }
    fraction operator++(int useless)
    {
      fraction temp;
      temp.numerator=numerator++;
      temp.denominator=denominator++;
      return temp;
    }
    fraction operator++()
    {
      fraction temp;
      temp.numerator=++numerator;
      temp.denominator=++denominator;
      return temp;
    }
    friend ostream & operator<<(ostream & ,fraction );
    friend istream & operator>>(istream &is ,fraction f );
};

ostream & operator<<(ostream &os ,fraction f )
{
  os<<"fraction = "<<f.numerator<<"/"<<f.denominator<<endl;
  return os;
}
void operator>>(istream &is ,fraction f )
{
 cout<<"enter the fraction = "<<endl;
 cin>>f.numerator;
 cin>>f.denominator;
}
int main()
{
fraction f1,f2, f3,f4;
f1.setfraction(2,3);
f1.display();
(f1++).display();
(++f1).display();
f2.setfraction(1,2);
f2=++f1;
f1.display();
f2.display();

f2=f1++;
f1.display();
f2.display();
f3.setfraction(10,11);
cout<<f3;
cin>>f4;
//

f4.display();

return 0;
}
