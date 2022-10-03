/*Create a class CString to represent a string.
a) Overload the + operator to concatenate two strings.
b) == to compare 2 strings. */
#include<iostream>
#include<string.h>
using namespace std;
 class Cstring 
 {
    char *a;
     int size;
     public:
     Cstring()
     {  cout<<" default contstructor"<<endl;
        a=(char*)malloc(1);
        size=1;
     }
     Cstring( char *s) // here s is string
     {  cout<<" parameterised contstructor"<<endl;
        size=strlen(s);
      a=(char*)malloc(size+1);
        strcpy(a,s); // strcpy perform  deep copy 
     }
     Cstring(Cstring &s) // here s is reference of object of cString type
     {   cout<<"copy contstructor"<<endl;
        // const keyword is used to protect in chnage of value 
        size=strlen(s.a);
      a=(char*)malloc(size+1);
        strcpy(a,s.a); // strcpy perform  deep copy 
     }
 Cstring& operator=( const Cstring &s)
 {  cout<<"Assigment operator "<<endl;
  if(a==s.a)
  {
    cout<<"both the object are same";
    return *this;
  }
    free(a); // a is of LHS  obj
 size=strlen(s.a);
      a=(char*)malloc(size+1);
        strcpy(a,s.a);
         return  *this;
 }
 friend ostream&operator<<( ostream &out, const Cstring &s);
  Cstring operator+(Cstring &cs1)
{ 
    Cstring temp;
 
  strcat(a,cs1.a); // a is of caller object
  strcpy(temp.a,a);
   return temp;
}

 };
 ostream& operator<<( ostream &out, const Cstring &s)
  { 
    cout<<"<< operator called"<<endl;
    cout<<s.a;
    return out;
  }

int main()
{ Cstring c1("krishna"),c2(" chuahan"), c3;
  c3=c1+c2;
  cout<<c3;
 
  return 0;
}