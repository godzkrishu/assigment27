/*Class mystring
{
char str [100];
Public:
// methods
}; */
#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
char str [100];
int  i,size=1;
public:
mystring(){}
mystring( char  *s)
{  cout<<" copy constructor called ";
    strcpy(str,s);
}
mystring& operator!()
{   cout<<" ! operator called";
    size=strlen(str)+1;
     for(i=0;i<size;i++)
     {if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        str[i]=str[i]-32;
     }
}
 void display()
 {cout<<"display function called"<<endl;
    cout<<str <<endl;
 }
};

 int main()
 {
     mystring m1("krishna"), m2("sandeep");
     !m1;
     !m2;
     m1.display();
     m2.display();
         
    return 0;
 }