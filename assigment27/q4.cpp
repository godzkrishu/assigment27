#include<iostream>
 using namespace std;
 class Time
 {
     int Hour, Min, Sec;
     public:
     Time()
     { 
       Hour=0;
        Min=0;
        Sec=0;

     }
     Time( int a, int b, int c)
     {
        Hour=a;
        Min=b;
        Sec=c;
     }
     void setdata( int a, int b, int c)
     {
        Hour=a;
        Min=b;
        Sec=c;
     }
    
    
      int operator==(Time &x)
      {
        if( (Hour==x.Hour)&&(Min==x.Min)&&(Sec==x.Sec))
        return 1;
        else
        return 0;
      }
      friend Time operator+(Time&, Time&);
      friend  ostream& operator<<( ostream &out, const Time &);
      friend  istream& operator>>( istream &in, Time &);

 };
  Time operator+(Time &T1, Time &T2)
 { Time temp;
   temp.Hour=T1.Hour+T2.Hour;
   temp.Min=T1.Min+T2.Min;
   temp.Sec=T1.Sec+T2.Sec;
   return temp;
 }
 ostream& operator<<(ostream &out, const Time &y)
 { 
    out<<y.Hour<<"hour "<<y.Min<<"minutes"<<y.Sec<<"second"<<endl;
    return out;
 }
 istream& operator>>(istream &in, Time &y)
 { 
    in>>y.Hour>>y.Min>>y.Sec;
    return in;
 }
 int main()
 {
    Time t1, t2, t3;
    cout<<"enter the input t1 and t2 in hour min and sec";
     cin>>t1;
     cin>>t2;
     t3=t1+t2;
     cout<<t3;
      if(t1==t2)
      cout<<" t1 and  t2 are equal";
       else 
       cout<<" t1 and t2 are not equal";

     return 0;
 }