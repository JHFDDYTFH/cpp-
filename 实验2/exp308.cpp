#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	int x,n,y;
	float sum=0.0;
	cout<<"请选择:　1.日用品　2.文具　3.食品"<<endl;
	cin>>x;
	switch(x)
	{
	case 1: 
	cout<<"请选择：1.牙刷(3.5元/支)　2.牙膏(6.2元/支)"<<endl;
	cout<<"　3.肥皂(2元/块)　4.毛巾(8.6元/条)"<<endl;
	cin>>y;
	cout<<"数量？"<<endl;
	cin>>n;
	switch(y)/*匹配顾客选择的具体商品*/
	{
	case 1:sum=3.5*n;/*计算相应商品价格*/
	case 2:sum=6.2*n;/*计算相应商品价格*/
	case 3:sum=2*n;/*计算相应商品价格*/
	case 4:sum=8.6*n;/*计算相应商品价格*/
	}
	break;
	case 2: 
	cout<<"请选择：1.笔( 3元/支)　2.笔记本(1.2元/个)"<<endl;
	cout<<"　3.文件夹(12元/个) 4.文具盒(8.6元/个)"<<endl;
	cin>>y;
	cout<<"数量？"<<endl;
	cin>>n;
	switch(y)
	{
	case 1: sum=3*n; break;
	case 2: sum=1.2*n; break;
	case 3: sum=12*n; break;
	case 4: sum=8.6*n; break;
	}
	break;
	case 3: 
	cout<<"请选择：1.白糖(3.6元/包)　2.盐(1元/包)"<<endl;
	cout<<"　　3.饼(2元/个) 4.方便面(3.6元/条)"<<endl;
	cin>>y;
	cout<<"数量？"<<endl;
	cin>>n;
	switch(y)
	{
	case 1: sum=3.6*n; break;
	case 2: sum=1*n; break;
	case 3: sum=2*n; break;
	case 4: sum=3.6*n; break;
	}
	break;
	}
	cout<<"总计"<<sum<<"元"<<endl;
	return 0;
}

