//6. Create a class CString to represent a string.
//a) Overload the + operator to concatenate two strings.
//b) == to compare 2 strings.
#include<iostream>
#include<cstring>
using namespace std;

class CString
{
 private:
      char str[20];
      char strr[40];
 public:
      void setString( char s[])
      {
       strcpy(str,s);
      }
      void display()
      {
       cout<<str<<endl;
      }
      CString operator+(CString s)
      {
       CString temp;
       strcpy(temp.str,str);
       strcat(temp.str,s.str);
       return temp;
      }
      int operator==(CString ss)
      {
       for(int i=0;str[i]!='\0';i++)
        {
          for(int j=0;ss.str[i]!='\0';i++)
          {
            if(str[j]!=ss.str[j])
               return 0;

          }
          return 1;
        }
      }

};
int main()
{
CString s1,s2,s3;
s1.setString("sushama");
s1.display();
s2.setString("sushama");
s2.display();
s3=(s1+s2);
s3.display();
if(s1==s2)
{
  cout<<"strings are equal"<<endl;
}
else
{
cout<<"strings are not equal"<<endl;
}


return 0;
}
