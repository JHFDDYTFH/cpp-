#include <iostream>
using namespace std;
class coord 
{ int x,y;
  public :
    coord(int i=0,int j=0);
	void print();
	coord operator ++();
	coord operator ++(int);
	coord operator -();
};
coord::coord(int i,int j)
{x=i;y=j;}
void coord::print()
{ cout << "x="<<x<<"  y="<<y<<endl;}
coord coord::operator ++()   //重载前置运算符++
{
 x++;
 y++;
 return *this;
}
coord coord::operator ++(int)  //重载后置运算符++
{ coord temp=*this;
    x++;
    y++;
    return temp;
 
}

coord coord::operator -()   //重载负号“-”
{ 
return coord(-x,-y);
}
int main() 
{  coord ob1(10,20),ob2(20,40),ob3(30,60),ob4; 
//可以将 ob1(10,20)理解为一个点对象，10和20分别表示其横纵坐标
  ob1.print();
  ob2.print();
  ++ob1;
  ob1.print();
  ob2.operator++(0);  //显式调后后置运算符
  ob2.print();
  ob3.operator-();
  ob3.print();  
  ob4=-ob1;
  ob4.print();  
  return 0;
}
