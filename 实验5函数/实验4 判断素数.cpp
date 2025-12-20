#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
bool isPrime(int n); //函数声明
int main( )
{
	int i, count=0;
	for( i=2; i<=1000; i++ )
	{
	   if(isPrime(i))
	   {
		cout<<setw(4)<<i;
		count++;
		if(count%8==0){
			cout<<endl;
		}
	   }
	}
	cout<<"\n The count is "<< count <<endl;	
	return 0;
}
//n：正整数，用于判断是否是素数
//返回：真表示是素数；假表示不是素数
bool isPrime(int n)
{   if(n==2)
	{
		return true;
	}
	   
	if(n%2==0)
	{
      return false;
	}
	int sqrtN=sqrt(n);
	for(int i=3;i<=sqrtN;i+=2)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
	
			