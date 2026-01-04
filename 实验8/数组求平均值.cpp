//编写一个函数，用于对作为参数的数组中的元素求平均值，
//函数以指针方式进行处理。
//平均值为函数的返回值
#include<iostream>
using namespace std; 
float average(int*arr,int len)
{
    int sum=0;//sum在循环外 
	for(int i=0;i<len;i++)
	{
		
		sum=sum+arr[i];
	}
	return (float)sum/len;
}

int main()
{
	int arr[10]={4,3,6,9,1,2,10,8,7,5};
	int len=sizeof(arr)/sizeof(arr[0]);
    float avg= average(arr,len);//调用时接受返回值，并打印结果 
cout<<"数组的平均值是："<<avg;
return 0;
	
	
}
