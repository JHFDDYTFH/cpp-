#include<iostream>
using namespace std;
class counter
{ private:
    static int count;     //count为静态数据成员
    char ch;           //普通数据成员
  public:
	counter(char c)     //构造函数
	{ this->count ++;ch=c;}
	void print_counter(void)
	{cout<<ch<<":  "<<count<<endl;}
	~counter(void)
	{count--;}
};
int counter::count=100;   //静态数据成员赋初值
int  main(void)
{ counter c1('A');
  c1.print_counter();
  cout<<endl;
  counter c2('B');
  c1.print_counter();
  c2.print_counter();
  cout<<endl;
  counter c3('C');
  c1.print_counter();
  c2.print_counter();
  c3.print_counter();
  return 0;
}