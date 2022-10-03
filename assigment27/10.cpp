/*
Class Matrix
{
int a[3][3];
Public:
//methods;
};
*/
#include<iostream>
using namespace std;
class Matrix
{
int i,j,a[3][3];
public:
Matrix(){}
 void setdata()
 {
    cout<<" enter the matrix element "<<endl;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
             cin>>a[i][j];

 }
 Matrix& operator=(const Matrix &m)
 { cout<<"assigment op called"<<endl;
    if(a==m.a)
    {
        cout<<"same assigmnet"<<endl;
        return *this;
    }
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
             a[i][j]=m.a[i][j]; 
 }
  Matrix operator+(Matrix &m)
  { cout<<" + operator called"<<endl;
    Matrix temp;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
             temp.a[i][j]=a[i][j]+m.a[i][j];
               return temp;
  }
  void display()
  {
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
             cout<<a[i][j]<<" ";
       cout<<endl;
    }
        
  }


};
 int main()
 {
    Matrix m1,m2, m3;
     m1.setdata();
     m2.setdata();
     m3=m1+m2;
     m3.display();
     return 0;
 }