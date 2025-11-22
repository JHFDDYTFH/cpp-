#include <iostream>
using namespace std;
int main()
{
	double x1,x2,y1,y2;
	double x,y;
	cin>>x1;
	cout<<"x1=";
	cin>>y1;
	cout<<"y1=";
	cin>>x2;
	cout<<"x2=";
	cin>>y2;
	cout<<"y2=";
	cin>>x;
	cout<<"x=";
	if(x1!=x2)
	{
	y=y1+(y2-y1)*(x-x1)/(x2-x1);
	cout<<"y="<<y<<endl;
}
    else
    {
    	cout<<"错误，x1和x2不能相等"<<endl; 
	}
	return 0;
}

