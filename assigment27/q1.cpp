/*1. Define a class Complex with appropriate instance variables and member functions.
Define following operators in the class:
a. +
b. -
c. *
d. == */

#include<iostream>
using namespace std;
class Complex
{
  int real, img;
public:
  void SetData (int a, int b)
  {
    real = a;
    img = b;
  }
  void ShowData ()
  {
    cout <<endl<<real << "+" << img<< "i";
  }
  Complex operator+ (Complex C)
  {
    Complex temp;
    temp.real = real + C.real;
    temp.img = img + C.img;
    return temp;
  }
  Complex operator- (Complex C)
  {
    Complex temp;
    temp.real = real - C.real;
    temp.img = img - C.img;
    return temp;
  }
  Complex operator-()
  {
    Complex temp;
    temp.real = -real;
    temp.img = -img;
     return temp;
  }
  Complex operator* (Complex C)
  {
    Complex temp;
    temp.real = real * C.real;
    temp.img = img * C.img;
    return temp;
  }
  bool operator== (Complex C)
  {
    if (real == C.real && img == C.img)
      return true;
    else
      return false;
  }



};

int main ()
{ Complex c1, c2, c3, c4, c5;
 c1.SetData(5,6);
  c2.SetData(1,2);
  c3=c1+c2;
 c3.ShowData();
 c4=c1*c2;
 c4.ShowData();
  c5=c1-c2;
  c5.ShowData();
  cout<<endl;
  if(c3==c4)
  cout<<" BOTH ARE EQUAL";
  else
  cout<<"both are diffrent";
  return 0;


}
