#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//需要定义一个变量，初始为0，用于指向数组相应的位置，
int count=0;
int primes[50];
SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
//每筛选出一个素数，把它放在数组中，该变量加1，
//要用bool类型判断是否为素数
//1.筛选素数的程序
for(int i=1;i<=100;i++)
{
    bool isPrime=true;//标记是否为素数，先标记成真
    for(int j=2;j<=i-1;j++){
    if(i%j==0)
    {
    isPrime=false;//能被整除，标记为假
    break;//提前跳出循环，寻找下一个素数
    }
}
    if(isPrime)//准备下一个素数进数组。
    {
        primes[count]=i;
        count++;
    }
}

//打印数组
cout<<"100以内的所有素数是：";
for(int k=0;k<count;k++)//k值的作用是索引count的值，primes[k]中的[]里面代表的是素组的个数
{
    cout<<primes[k]<<" ";
}
cout<<endl;
return 0;
}