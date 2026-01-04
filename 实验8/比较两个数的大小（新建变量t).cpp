#include<iostream>
using namespace std;
int main()
{
	int *p1,*p2,*p,a,b;
	cin>>a>>b;
	p1=&a;
	p2=&b;
	if(a<b)
	{
	int	t=*p1;
		*p1=*p2;
		*p2=t;
	}
cout<<"a="<<a<<"b="<<b<<endl;
cout<<"max="<<*p1<<"min="<<*p2;
return 0;
}
