#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
int n,i,j,sign=1;
float fac,sum;
cout<<"please input value of n:"<<endl;
cin>>n;
sum=0.0;
for(i=1;i<=2*n-1;i=i+2)
{
fac=1.0;
for(j=1;j<=i;j++)
fac*=j;
sum+=sign*fac;
sign=-sign;
}
cout<<"sum= "<<sum<<endl;
}
