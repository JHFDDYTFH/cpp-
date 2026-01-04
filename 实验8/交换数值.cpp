#include <iostream>
using namespace std;
int main()
{
	int a=3;
	int b;
	int *p;
	p=&a;//不能对指针赋值 
	b=*p;
	cout<<b<<endl;
	a=100;
	b=*p;
	cout<<b;
	return 0;
	
}
