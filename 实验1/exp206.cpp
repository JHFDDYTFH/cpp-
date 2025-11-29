#include<iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	float temp = a;a=b;b=temp;
	cout<<"a="<<a<<"b="<<b<<"\n";
	return 0;
}
