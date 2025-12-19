#include <iostream>
#include <iomanip>
using namespace std;
         ①            //函数声明
         ②            //函数声明
int main( )
{
	int i, count=0;
	for( i=1; i<=70; i++ )
	  cout<< "-";
	cout<< endl;
	        ③          //函数调用
	cout<< endl;
	for( i=1; i<=70; i++ )
	  cout<< "-";
	cout<< endl;
	        ④          //函数调用
	cout<< endl;
	return 0;
}
//n1：起始整数；n2：终止整数
void myprint(int n1, int n2)
{
⑤//请完成这部分内容
}
//c1：起始字符；c2：终止字符
void myprint(char c1, char c2)
{
⑥//请完成这部分内容
}
