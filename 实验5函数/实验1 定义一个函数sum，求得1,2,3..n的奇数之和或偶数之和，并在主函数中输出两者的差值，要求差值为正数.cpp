#include <iostream>
using namespace std;
int sum(int , bool); //函数声明
int main( )
{
	int data, m , n;
	cout<<"input a data: ";
	cin>>data;  //输入一个正整数
	m = sum(data,false)       ; //求奇数之和
    n = sum(data,true)         ; //求偶数之和
cout<<"1..."<<data<<"奇数之和:"<<m<<endl;
	cout<<"1..."<<data<<"偶数之和:"<<n<<endl;
if(m > n) {
	int d = m - n;
	cout<<"奇数之和>偶数之和,差值为:"<<d<<endl;   //输出
} else {
	int d2 = n - m;
	cout<<"偶数之和>奇数之和.差值为:"<<d2<<endl; //输出
}
	return 0;
}
/*
参数说明：
n：正整数
flag: 假表示求1...n的奇数之和；真表示求1...n的偶数之和
*/
int sum( int n, bool flag )
{
	int total=0;
	if(!flag)//奇数求和
	{
		for(int i=1;i<=n;i+=2)
		total+=i;
	}
	//偶数求和
	else
	{
		for(int i=2;i<=n;i+=2)
		total+=i;
	}
	return total;

}
