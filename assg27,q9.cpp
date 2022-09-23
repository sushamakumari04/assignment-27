/*9. Consider the following class mystring
Class mystring
{
char str [100];
Public:
// methods
};
Overload operator “!” to reverse the case of each alphabet in the string
(Uppercase to Lowercase and vice versa).*/
#include<iostream>
using namespace std;

class mystring
{
private:
    char str[100];
public:
    void input()
    {
      cout<<"enter the string"<<endl;
      cin.ignore();
      cin.getline(str,100);
    }
    void display()
    {
      for(int i=0;str[i]!='\0';i++)
      {
        cout<<str[i];
      }
    }
    mystring operator!()
    {
     mystring temp;
     for(int i=0;str[i]!=0;i++)
     {
      if(str[i]>=65&&str[i]<=90)
          temp.str[i]=str[i]+32;
      else if(str[i]>=97&&str[i]<=122)
          temp.str[i]=str[i]-32;
     }
     return temp;
    }
};

int main()
{
mystring s1,s2,s3;
s1.input();
s1.display();
cout<<endl;
(!s1).display();


return 0;
}
