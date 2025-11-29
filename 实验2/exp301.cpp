#include"math.h"
#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"x=";
	cin>>x;
	if (x>0) y=sqrt(x);
	else y=x;
	cout<<"y="<<y<<endl;
	return 0;
}
