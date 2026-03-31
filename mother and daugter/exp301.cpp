#include<iostream>
#include <cstdlib>
using namespace std;
class Base      //基类Base的定义
{ private:
    float x,y;  
  public:
	Base(float a=0,float b=0)
	{x=a;y=b;}
	float get_x() { return x;} 
	float get_y() { return y;} 
	void print(void)
	{ cout<<"  x="<<x<<"  y="<<y<<endl;}
};
class Derived:public Base  //派生类Derived的定义——公有继承
{ private:
    float z;
  public:
	Derived(float a=0,float b=0,float c=0):Base(a,b)
	{ z=c;}//派生类的构造函数定义
	float get_z() { return z;} 
	void print(void)  
	{  cout<<"  z="<<z<<endl;
	 Base::print(); }
};
int main()
{ 
Base a(10.0,20.0);
    Derived b(10.0,20.0,30.0);
    
    // 强制输出
   
    a.print();
    cout << endl;
    b.print();
    cout << endl;
    cout << "  x=" << b.get_x() << "  y=" << b.get_y() << "  z=" << b.get_z() << endl;
    
    // 暂停，防止窗口一闪而过
    system("pause");
    return 0;
}