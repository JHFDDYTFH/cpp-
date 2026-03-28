#include <iostream>
using namespace std;
class coord 
{ int x,y;
  public :
    coord(int i=0,int j=0);
	void print();
	coord operator ++();
};
coord::coord(int i,int j)
{x=i;y=j;}
void coord::print()
{ cout << "x="<<x<<"  y="<<y<<endl;}
coord coord::operator ++()
{ ++x;
  ++y;
  return *this;
};
int main()

{ coord ob(10,20);
  ob.print();
  ob.operator++( );
  ob.print();
}
