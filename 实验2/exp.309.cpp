#include<math.h>
#include<iostream>
#include <windows.h> 
using namespace std;
int main()
{
	SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
float a,b,c;
	cout<<"输入三角形的三条边a,b,c："<<endl;
	cin>>a>>b>>c;
	if  ((a>0)&&(b>0)&&(c>0)&&((a+b)>c)&&((b+c)>a)&&((a+c)>b))/*判断三边是否构成三角形*/
	{
		if((a==b)&&(a==c))
		    cout<<"等边三角形"<<endl;
	    else
			if ((a==b)||(a==c)||(b=c))
				cout<<"等腰三角形"<<endl;
			else
				if((a*a+b*b==c*c)||(b*b+c*c==a*a)||(a*a+c*c==b*b))
 /*如果两边的平方和等于第三边平方，则为直角三角形*/
					cout<<"直角三角形"<<endl;
				else
					cout<<"一般三角形"<<endl;
		}
	else
	   cout<<"不能组成三角形"<<endl;
	return 0;
}


