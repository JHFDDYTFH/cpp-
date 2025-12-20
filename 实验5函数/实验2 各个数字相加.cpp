#include <iostream>
#include<windows.h>
using namespace std;
int sumDigits( long ); //函数声明
int main( )
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
	long data;
	int  n;
	cout<<" input a data: ";
	cin>>data;  //输入一个整数
	if(data <=0 )
	{
		cout<<" input error(<=0)"<<endl;
		return -1;
	}
	n= sumDigits(data);    //函数调用
	cout<<" The sum of digits is "<< n <<endl;
	return 0;
}
/*
参数说明：
n：正整数，用于求各位数字之和
*/
int sumDigits(long n)
{
    int i;int total=0;int digit;
	for(i=1;n!=0;i++){
    digit=n%10;//不能破坏初始数据，创建临时变量名
	total=total+digit;
	n=n/10;}
return total;//return要在循换外面，否则只进行一次
}
