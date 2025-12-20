#include <iostream>
#include <iomanip>
using namespace std;
    void myprint(int n1, int n2) ;  //函数声明
    void myprint(char c1, char c2);              //函数声明
int main( )
{
	int i, count=0;
	for( i=1; i<=70; i++ )
	  cout<< "-";
	cout<< endl;
	myprint(1,100) ;              //函数调用
	cout<< endl;
	for( i=1; i<=70; i++ )
	  cout<< "-";
	cout<< endl;
	 myprint('0','z');                 //函数调用
	cout<< endl;
	return 0;
}
//n1：起始整数；n2：终止整数
void myprint(int n1, int n2)
{int count=0;
	for(int i=n1;i<=n2;i++)
	cout<<setw(6)<<i;
if(count%10==0);
	//请完成这部分内容
}
//c1：起始字符；c2：终止字符
void myprint(char c1, char c2)
{
	char count=0;
for(char i=c1;i<=c2;i++)
cout<<setw(6)<<i;
if(count%10==0)
cout<<endl;//请完成这部分内容
}
