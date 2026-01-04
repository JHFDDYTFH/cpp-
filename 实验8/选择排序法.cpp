#include <iostream>
#include <cstring>
using namespace std;
int main()
{
char * str[]={"C program", "Basic", "Foxbase+", "Fortran", "Pascal"};
	int i,j;   char *  temp;
	for(i=0;i<4;i++)
	for(j=i+1;j<5;j++)
	if(strcmp(str[i],str[j])>0)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	for(i=0;i<5;i++){
	cout<<str[i]<<" ";}
	return 0;
	}

