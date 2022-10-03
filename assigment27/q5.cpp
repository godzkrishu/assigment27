#include<iostream>
 using namespace std;
 class Number
 {
    int x, y,z;
    public:
     Number()
     {
        x=0;
        y=0;
        z=0;
     }
     Number( int a, int b, int c)
     {
        x=a;
        y=b;
        z=c;
     }
     void setdata( int a, int b, int c)
     {
        x=a;
        y=b;
        z=c;
     }
      void display()
      {
        cout<<"x="<<x<<endl;
        cout<<"y="<<y<<endl;
        cout<<"z="<<z<<endl;
      }
      Number operator-()
      { Number temp;
       temp.x=-x;
       temp.y=-y;
       temp.z=-z;
       return temp;
       }

 };
   int main()
   { 
      Number num1, num2;
      num1.setdata(4,5,6);
      num2=-num1;
      num2.display();
       return 0;
   }