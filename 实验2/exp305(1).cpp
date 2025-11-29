#include<iostream>
using namespace std;
int main()
{
	char a,b,c,min;
	cout<<"input a,b,c:"<<endl;
	cin>>a>>b>>c;
	if(a<=b&&a<=c)min=a;
	if(b<=a&&b<=c)min=b;
	if(c<=a&&c<=b)min=c;
	cout<<"The result is"<<min<<endl;
	return 0; 
}
