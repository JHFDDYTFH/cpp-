#include<iostream>
#include <locale.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "zh-CN.UTF-8"); 
	double a,b,c,temp;
	cout<<"input a,b,c:"<<endl;
	cin>>a>>b>>c;
	if(a>b){
		temp =a;
		a=b;
		b=temp;
	}
	if(a>c){
		temp =a;
		a=c;
		c=temp;
	}
	if(b>c){
		temp =b;
		b=c;
		c=temp;
	}
	cout<<"排序"<<a<<""<<b<<""<<c<<endl;
	return 0; 
}
