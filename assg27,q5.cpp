/* 5. Consider following class Numbers
class Numbers
{
int x,y,z;
public:
// methods

};
Overload the operator unary minus (-) to negate the numbers. */
#include<iostream>
using namespace std;

class Numbers
{
private:
    int x,y,z;
public:
    Numbers(){}
    Numbers(int a,int b,int c)
    {
        x=a;
        y=b;
        z=c;
    }
    void setNumbers(int a,int b,int c)
    {
     x=a;
     y=b;
     z=c;
    }
    void display()
    {
     cout<<" x= "<<x<<" y = "<<y<<" z = "<<z<<endl;
    }
    Numbers operator-()
    {
      Numbers temp;
      temp.x=-x;
      temp.y=-y;
      temp.z=-z;
      return temp;
    }
};
int main()
{
Numbers n1,n2,n3;
n1.setNumbers(5,6,7);
n1.display();
n2=-n1;
n2.display();
return 0;
}
