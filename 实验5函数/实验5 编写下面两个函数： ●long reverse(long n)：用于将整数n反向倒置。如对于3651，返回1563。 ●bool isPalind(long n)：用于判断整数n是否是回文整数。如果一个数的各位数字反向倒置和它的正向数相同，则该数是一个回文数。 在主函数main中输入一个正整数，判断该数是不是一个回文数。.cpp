#include <iostream>
using namespace std;
long reverse(long n); //函数声明
bool isPalind(long n); //函数声明
int main( )
{
	long data;
	bool flag;
	cout<<" input a data: ";
	cin>>data;  //输入一个整数
	if(data <=0 )
	{
		cout<<" input error(<=0)"<<endl;		
		return -1;
	}
	flag =        ①      ; //函数调用  	
	if(flag)
		cout<< data << " is a palindrome"<<endl ;
	else
		cout<< data << " is not a palindrome" <<endl;
	return 0;
}
//n：正整数，用于求反向倒置数
long reverse(long n)
{
②//请完成这部分内容
}
//n：正整数，用于判断是否是回文数
bool isPalind(long n)
{
	③//请完成这部分内容
}
