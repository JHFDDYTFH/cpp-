#include<iostream>
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
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
