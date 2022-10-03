/*Define a C++ class fraction
class fraction
{
long numerator;
long denominator;
Public:
fraction (long n=0, long d=0);
}*/
 #include<iostream>
 using namespace std;
  class Fraction
  {
    long numerator;
    long denominator;
     public:
     Fraction(){}
     Fraction( long x, long y)
     {
      numerator=x;
      denominator=y;
     }
      Fraction operator++()//for ++fraction
      { cout<<endl<<"++f operactor called";
         Fraction temp;
        numerator=numerator+denominator; // changing the value of numerator
         temp.numerator=numerator;// becouce a/b+1=(a+b)/b
         temp.denominator=denominator;
         return temp;
      }
      Fraction operator++( int ) //for fraction++
      {  cout<<endl<<"f++ operactor called";
        Fraction temp;
        numerator=numerator+denominator; // changing the value of numerator
         temp.numerator=numerator;// becouce a/b+1=(a+b)/b
         temp.denominator=denominator;
         return temp;

      }

     friend ostream& operator<<( ostream &out, Fraction &F);
     friend istream& operator>>(istream &in,Fraction &F);
     

  };
 ostream& operator<<( ostream &out, Fraction &F)
     {
      out<<F.numerator<<"/"<<F.denominator<<endl;
     }
     istream& operator>>(istream &in,Fraction &F)
     {
      in>>F.numerator>>F.denominator;
     }
     

  int main()
  { Fraction f1, f2;
   cout<<"enter the num and denominator of f1";
  cin>>f1;
   cout<<endl<<" f1 is "<<f1;
   ++f1;
   cout<<endl<<" ++f1 is "<<f1;
   cout<<endl<<"enter the num and denominator of f2";
  cin>>f2;
  cout<<endl<<" f2 is "<<f2;
 f2++;
   cout<<endl<<" f2++ is "<<f2;

    return 0;
  }