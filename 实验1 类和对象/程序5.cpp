#include<iostream>
#include<windows.h>
using namespace std;

class Myclass
{ private:
	int a,b;
  public:
    Myclass(int x1=0,int x2=0)
	{a=x1;b=x2;
	 cout<<"构造函数被调用！"<<endl;
	}
	~Myclass()
	{cout<<"析构函数被调用！"<<endl;}
	Myclass(Myclass &ob)
	{ a=ob.a;b=ob.b;
	  cout<<"复制构造函数被调用！"<<endl;
	}
	void print(void)
	{ cout<<"a="<<a<<"  b="<<b<<endl;}
};
void func1(Myclass ob)
{ cout<<"func1: ";
  ob.print();
}
void func2(Myclass *ob)
{ cout<<"func2: ";
  ob->print();
}
void func3(Myclass &ob)
{ cout<<"func3: ";
  ob.print();
}
int main()
{ SetConsoleOutputCP(65001);
 SetConsoleCP(65001); 
  Myclass ob(10,10);
  cout<<"main: ";ob.print();
  cout<<"调用func1："<<endl;
  func1(ob);
  cout<<"调用func2："<<endl;
  func2(&ob);
  cout<<"调用func3："<<endl;
  func3(ob);
  cout<<"main: ";ob.print();
  return 0;
}
