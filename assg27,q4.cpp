/*4. Create a class Time which contains:
- Hours
- Minutes
- Seconds
Write a C++ program using operator overloading for the following:
1. = = : To check whether two Times are the same or not.
2. >> : To accept the time.
3. << : To display the time.
*/
#include<iostream>
using namespace std;

class Time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){}
    Time(int x,int y,int z)
    {
     hours=x;
     minutes=y;
     seconds=z;
    }
     void setTime(int x,int y,int z)
    {
     hours=x;
     minutes=y;
     seconds=z;
    }
    void display()
    {
     cout<<" Hours = "<<hours<<" Minutes = "<<minutes<<" second = "<<seconds<<endl;
    }
     int operator==(Time t)
    {
     if(hours==t.hours&&minutes==t.minutes&&seconds==t.seconds)
        return 1;
     else
         return 0;
    }
     friend ostream & operator<<(ostream &,Time );
     friend void operator>>(istream &,Time);

};

void operator>>(istream &is,Time t)
{
 cout<<"enter the time"<<endl;
 is>>t.hours;
 is>>t.minutes;
 is>>t.seconds;
}

ostream & operator<<(ostream &os,Time t)
{
os<<"hour : "<<t.hours<<" minutes : "<<t.minutes<<" seconds : "<<t.seconds<<endl;
return os;
}

int main()
{
Time t1,t2,t3;
t1.setTime(2,3,4);
t2.setTime(2,5,4);
t1.display();
t2.display();
if(t1==t2)
{
   cout<<"time equal"<<endl;
}
else
    cout<<"time is not equal"<<endl;

cout<<t1;
cin>>t3;
//t3.display();


return 0;
}
