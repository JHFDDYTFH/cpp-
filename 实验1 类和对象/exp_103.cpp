#include<iostream>
using namespace std;
#include<string.h>
#include<windows.h>
class girl
{ private:
	char *name;
    int age;
  public:
  friend void disp(girl&g);
	girl(char *na,int n)
	{ name=new char[strlen(na)+1];
	  strcpy(name,na);
	  age=n;
	}
	  
	~girl(void)    
	{delete[] name;}  //释放new分配的内存
	const char *get_name(void) const
	{return name;}
	int get_age(void)const
	{return age;}
	void print_girl(void);
	
};
void girl::print_girl(void)
{ cout<<"姓名:"<<name;
  cout<<"  年龄:"<<age<<endl;
}
void disp( girl &g)   

{ cout<<"姓名:"<<g.name;
  cout<<"  年龄:"<<g.age<<endl;
}
int main(void)
{ SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
	girl g1("李小丫",12),g2("王永兰",15),g3("赵梦美",13);
  cout<<"姓名:"<<g1.get_name();
  cout<<"  年龄:"<<g1.get_age()<<endl;
  g2.print_girl();
  disp(g3);
  return 0;
}