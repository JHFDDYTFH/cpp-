#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
//定义一个一维数组，并给它初值，
int a[5]={1,5,6,9,0};
int newnumber;
cout<<"Please enter a newnumber: ";
cin>>newnumber;
a[4]=newnumber;cout<<"还未排序的数组为"<<endl;
for(int k=0;k<5;k++){
cout<<a[k]<<" ";
}
cout<<endl;
for(int i=0;i<4;i++)
{
    for(int j=0;j<5-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}
//再找输入值的位置，(冒泡排序)
//将应位于它后面的数逐一后移（从后往前进行后移，比如：a[i+1]=a[i]），
//再将所输入的值放到它的位置上去。

//打印排好序以后的数组
cout<<"排好序以后的数组为：";
for(int k=0;k<5;k++)
{
    cout<<a[k]<<" ";
}
cout<<endl;
return 0;
}