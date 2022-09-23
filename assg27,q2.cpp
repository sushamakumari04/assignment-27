//2. Write a C++ program to overload unary operators that is increment and decrement.
#include<iostream>
using namespace std;

class Number
{
private:
    int a;
public:
    Number(){}
    Number(int x)
    {
     a=x;
    }
    void setNumber(int x)
    {
     a=x;
    }
    void display()
    {
    cout<<" a = "<<a<<endl;
    }
    Number operator++()
    {
      Number temp;
      temp.a=++a;
      return temp;
    }
     Number operator++(int useless)
    {
      Number temp;
      temp.a=a++;
      return temp;
    }


};

int main()
{
Number n1,n2,n3,n4;
n1.setNumber(5);
n1.display();
n2=++n1;
n2.display();
n3.setNumber(10);
n4=n3++;
n4.display();


return 0;
}
