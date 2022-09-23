/*8. Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
};
Overload the - (Unary) should negate the numbers stored in the object.
Output -*/
#include<iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    Matrix(){}

    void input()
    {
     cout<<"enter the elements in the matrix"<<endl;
     for(int i=0;i<=2;i++)
     {
       for(int j=0;j<=2;j++)
        {
         cin>>a[i][j];
        }
     }
    }
    void display()
    {
     cout<<"Matrix is"<<endl;
     for(int i=0;i<=2;i++)
     {
       for(int j=0;j<=2;j++)
        {
         cout<<a[i][j];
         cout<<"  ";
        }
        cout<<endl;
     }
    }
    Matrix operator-()
    {
      Matrix temp;
     for(int i=0;i<=2;i++)
     {
       for(int j=0;j<=2;j++)
        {
          temp.a[i][j]=-a[i][j];
        }
        cout<<endl;
     }
     return temp;
    }

};
int main()
{
Matrix m1,m2;
m1.input();
m1.display();
(-m1).display();

return 0;
}
