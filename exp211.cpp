#include<iostream>
using namespace std;
int main()
{ int a=2,b=3,c,m;
  c=a+b;
  cout<<"b/a:"<<b/a<<","<<float(b)/a<<endl;
  cout<<"b%a:"<<b%a<<endl;
  cout<<"a>b||c>b:"<<(a>b||c>b)<<endl;
  cout<<"a>b&&c>b:"<<(a>b&&c>b)<<endl;
  m=(m=a>b?a:b)>c?m:c;
  cout<<"m="<<m<<endl;
  cout<<"++a+(b++):"<<++a+(b++)<<endl;
  return 0;
}

