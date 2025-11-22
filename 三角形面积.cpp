#include <iostream>
#include <cmath>
using namespace std;
int main(void)
{ 
  double a,b,c; //分别表示三角形的三条边长
  double p,s; //p、s分别表示平均边长及面积
  cin>>a;
  cout<<"a=";
  cin>>b;
  cout<<"b=";
  cin>>c;
  cout<<"c=";
  p=(a+b+c)/2.0;
  cout<<"p="<<p<<endl;//计算平均边长
  s=sqrt(p*(p-a)*(p-b)*(p-c));//计算面积
  cout<<s<<'\n';
  return 0;
}
