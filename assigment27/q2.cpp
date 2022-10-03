#include<iostream>
 using namespace std;
  class Complex
  {
    int a, b;
     public:
     void SetDAta( int x, int y)
     {
      a=x;
      b=y;
     }
      void ShowData()
      {
         cout<<endl<<a<<"+"<<b<<"i";
      }
      Complex operator++() // for ++a
      { Complex temp;
      cout<<endl<<"++a funtion calling";
       temp.a=++a;
       temp.b=++b;
        return temp;
      }
      Complex operator--()// for --a
      { Complex temp;
      cout<<endl<<"--a funtion calling";
       temp.a=--a;
       temp.b=--b;
        return temp;
      }
      Complex operator++(int dummy) //for a++ and here int argument has no use, it is used just for marks
      { Complex temp;
      cout<<endl<<"a++ funtion calling";
       temp.a=a++;
       temp.b=b++;
        return temp;
      }
      Complex operator--(int dummy) //for a-- and here int argument has no use, it is used just for marks
      { Complex temp;
      cout<<endl<<"a-- funtion calling";
       temp.a=a--;
       temp.b=b--;
        return temp;
      }

  };
   int main()
   {
     Complex c1, c2;
     c1.SetDAta(5,6);
     c2.SetDAta(10,8);
      ++c1;
      c1.ShowData();
      c1++;
      c1.ShowData();
      c2--;
      c2.ShowData();
      --c2;
      c2.ShowData();
      return 0;
   }