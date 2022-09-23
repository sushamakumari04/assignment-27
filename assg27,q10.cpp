/*10.Class Matrix
{
int a[3][3];
Public:
//methods;
};
Let m1 and m2 are two matrices. Find out m3=m1+m2 (use operator
overloading).
Output -*/
#include<iostream>
using namespace std;

class Matrix
{
private:
    int a[3][3];
public:
    void setMatrix()
    {
     cout<<"Enter Matrix Element(3x3)"<<endl;
     for(int i=0;i<3;i++)
     {
      for(int j=0;j<3;j++)
        {
         cin>>a[i][j];
        }
     }
    }
    void display()
    {
     for(int i=0;i<3;i++)
     {
        for(int j=0;j<3;j++)
        {
         cout<<a[i][j];
         cout<<"     ";
        }
        cout<<endl;
     }
    }

    Matrix operator+(Matrix m)
    {
        Matrix temp;
      for(int i=0;i<3;i++)
      {
       for(int j=0;j<3;j++)
        {
          temp.a[i][j]=a[i][j]+m.a[i][j];
        }
      }
       return temp;
    }
};
int main()
{
Matrix m1,m2,m3;
m1.setMatrix();
m2.setMatrix();

cout<<"First Matrix : "<<endl;
m1.display();
cout<<"Second Matrix : "<<endl;
m2.display();
cout<<"Addition of Matrix : "<<endl;
m3 = m1+m2;
m3.display();

return 0;
}
