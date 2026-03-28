#include<iostream>
#include<windows.h>
using namespace std;
class  A
{ private:
	int a,b;
  public:
	A(void)
	{ a=0;b=0;}
    A(int x1,int x2)
	{a=x1;b=x2;}
	A(A &ob)
	{ a=ob.a;b=ob.b;
	  cout<<"复制构造函数被调用！"<<endl;
	}
	void print(void)
	{ cout<<"a="<<a<<"  b="<<b<<endl;}
};
int main()
{ 
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
  A ob1(20,30),ob;
  A ob2(ob1);
  ob2.print();
  ob=ob1;
  ob.print();
    return 0;
}