#include<stdio.h>
int main()
{
	float x,y;
	printf("x=");scanf("%f",&x);
	if(x<=2)
	y=x;
	else
	if(x<=4)
	y=1+x/2;
	else
	y=2+x/4;
	printf("y=%6.2f\n",y);
	return 0;
}
