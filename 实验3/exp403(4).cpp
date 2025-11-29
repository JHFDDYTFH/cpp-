#include <iostream>
using namespace std;
int main()
{
    int i,n;double p;
    cout<<"n=";cin>>n;
    for(i=1,p=1.0;i<=n;p*=i,i++)
    ;
    cout<<n<<"!="<<p<<endl;
}