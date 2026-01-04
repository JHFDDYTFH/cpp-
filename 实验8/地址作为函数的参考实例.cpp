#include<iostream>
#include<windows.h>
using namespace std;
int swap(int *p1,int *p2)
{
    int t;
    t=*p1;
    *p1=*p2;
    *p2=t;

    return 0;
}

int main()
{
int a,b,*p1,*p2;
cin>>a>>b;
p1=&a;
p2=&b;
swap(p1,p2);
cout<<"a="<<a<<",b="<<b<<endl;
cout<<"*p1="<<*p1<<",*p2="<<*p2<<endl;
return 0;//函数改变了p1,p2指向的值
}