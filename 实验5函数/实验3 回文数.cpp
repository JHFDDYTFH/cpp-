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
	flag = isPalind(data)       ; //函数调用  	
	if(flag)
		cout<< data << " is a palindrome"<<endl ;
	else
		cout<< data << " is not a palindrome" <<endl;
	return 0;
}
//n：正整数，用于求反向倒置数
long reverse(long n)
{
int digit;long newnumber=0;
while(n!=0){
	digit=n%10;
	newnumber=newnumber*10+digit;
    n=n/10;
}
return newnumber;
}
//n：正整数，用于判断是否是回文数
bool isPalind(long n)
{
	long flag;
	flag=reverse(n);
	if(n==flag){
	return true;}
	else{
	return false;}
	
}
	
