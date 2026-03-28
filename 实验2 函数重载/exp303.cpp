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
  friend complex operator+(complex c1,complex c2);
};
complex operator+(complex c1,complex c2)//重载“+”
{ complex temp;
  temp.real=c1.real+c2.real;
  temp.imag=c1.imag+c2.imag;
  return temp;
}
void complex::print()
{cout <<real;
 if (imag>0) cout<<"+";
 if (imag!=0) cout <<imag<<"i"<<endl;
}

// complex complex::operator+(complex c1, complex c2)
// {
//     return complex();
// }

int main()
{ complex A1(2.3,4.6),A2(3.6,2.8),A3;
  A3=A1+A2;
  A1.print();A2.print();
  A3.print();
  return 0;
}
