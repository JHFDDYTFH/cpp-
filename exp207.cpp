#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int x,x0,x1,x2;
	cout<<"Please enter an integer X:";
	cin>>x;
	x2=x/100;
	x1=(x/10)%10;
	x0=x%10;
	cout<<"bit0="<<x0<<"bit1="<<x1<<"bit2="<<x2;
	cout<<endl;
	return 0;
	
}
