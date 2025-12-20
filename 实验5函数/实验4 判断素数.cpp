#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool isPrime(int n); //函数声明
int main( )
{
	int i, count=0,flag;
	for( i=2; i<=1000; i++ )
	{
	   if(isPrime(i))
	   {
		count++;
	   }
	}
	cout<<"\n The count is "<< count <<endl;	
	return 0;
}
//n：正整数，用于判断是否是素数
//返回：真表示是素数；假表示不是素数
bool isPrime(int n)
{
	int k,i;
	for(n=1;n<=1000;n=n+2)
	{
		k=int(sqrt(n));
		for(i=2;i<=k;i++)
		{
			if(n%i==0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
