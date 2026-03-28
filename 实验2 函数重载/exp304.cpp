#include <iostream>
using namespace std;
class complex
{ private :
   double real ;
   double imag;
  public :
   complex(double r=0,double i=0)
   {real=r;imag=i;}
   void print();
   complex operator+(const complex &c);
   complex operator-(const complex &c);
};
complex complex ::operator+(const complex &c)  //重载“+”
{  
return complex(this->real+c.real,this->imag+c.imag);
}
complex complex ::operator-( const complex &c)   //重载“-”
{  
return complex(this->real-c.real,this->imag-c.imag);
}
void complex::print()
{cout <<real;
 if (imag>0) cout<<"+";
 if (imag!=0) cout <<imag<<"i";
 cout <<endl;
 
}
int main()
{ complex A1(2.3,4.6),A2(3.6,2.8),A3,A4;
  A3=A1+A2;
A4=A1-A2;
  A1.print();
A2.print();
  A3.print();
A4.print();
}
