#include<iostream>
using namespace std;
int  main()
{ int i,n;//n表示计算的项数
  double p,ex,x,t;//t、p分别用作计算分子，分母
  cout<<"n=";cin>>n;
  cout<<"x=";cin>>x;
  ex=1.0;p=1.0;t=1.0;
  for (i=1;i<=n;i++)
  { p*=i;t*=x;ex=ex+t/p;}
  cout<<"exp("<<x<<")="<<ex<<endl;
}
