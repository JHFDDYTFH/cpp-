#include<iostream>
using namespace std;
int main()
{
	int n;double y;
	cout<<"n=";cin>>n;
	if(n<=0) y=0;
	else if (n<=5) y=1.0;
	else if (n<=10) y=1.5;
	else y=2.0;
	cout<<"y="<<y<<endl;
	return 0; 
}
