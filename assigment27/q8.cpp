/* Consider a class Matrix
Class Matrix
{
int a[3][3];
Public:
//methods;
}; */
#include<iostream>
 using namespace std;
  class Matrix
  {
    int a[3][3];
    public:
    Matrix(){}
    void setdata()
    {
        cout<<"enter the value of matrix "<<endl;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cin>>a[i][j];
            }
        }

    }
    
    void showdata()
    {
        cout<<"value of matrix are "<<endl;
        int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout<<a[i][j]<<"  ";
            }
            cout<<"\n";
        }

    }

    Matrix operator-()
    { cout<<"- operator called "<<endl;
       Matrix m;
      int i,j;
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
               m.a[i][j]=-a[i][j];
            }
        }
        return m;

    }

  };
   int main()
   { Matrix m1;
   m1.setdata();
   m1=-m1;
   m1.showdata();
   return 0;
   }
