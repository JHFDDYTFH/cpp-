#include <iostream>
using namespace std;
int main()
{
	int j,a[12],*p;
	p=a;//使指针p指向数组a的首地址处
	for(j=0;j<12;j++){
	cin>>*p;//赋值给指针指向的元素 
	p++; //指针向后移 
	}
    p=a;//指针重新定位到数组a的首地址
	for(j=0;j<12;j++)
	{
		cout<<*p<<"\t";
		if((j+1)%4==0)//控制每行按4个元素输出 
		{
			cout<<endl;
		}
		p++;//指针向后移 
	} 
	cout<<"\n";
	return 0;
}