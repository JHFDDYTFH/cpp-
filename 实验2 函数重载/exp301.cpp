#include<iostream>
using namespace std;

template <class A>
class point
{ private:
    A x,y;
  public:
	point(void)         
	{x=0;y=0;}
    point(A a,A b)   
	{x=a ; y=b; }
    point(const point &ob)  
	{x=ob.x;y=ob.y;}
	void set_point(A a,A b);
	A read_x(void);
	A read_y(void);
	void move(A a,A b);
	void print(void);
};
template <class A>
void point <A>::set_point(A a,A b)
 {x=a ; y=b; }
template <class A>
A point <A>::read_x(void)
 { return x;}
template <class A>
A point<A>::read_y(void)
 { return y;}
template <class A>
void point<A>::move (A a,A b)
 { x+=a;y+=b;}
template <class A>
void point<A>::print(void)
{ cout<<"x="<<x<<"  y="<<y<<endl;}
int main()
{    point <double> p2(20.55,30.65);
  p2.print();
  p2.move(5.5,10.5);  p2.print();
}
