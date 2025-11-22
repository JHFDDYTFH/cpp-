#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a,b,c,min;
    cout<<"input a,b,c:"<<endl;
    cin>>a>>b>>c;
    if(a>b){int t=a;a=b;b=t;}
    if(a>c){int t=a;a=c;c=t;}
    if(b>c){int t=b;b=c;c=t;}
    cout<<"Sorted:"<<a<<""<<b<<""<<c<<endl;
    return 0;
}
