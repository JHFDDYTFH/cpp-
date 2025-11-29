#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int i,n,flag;
    cout<<"Please enter a number:";
    cin>>n;
    flag=1;
    for(i=2;i<=sqrt(n);i++)
    if(n%i==0)
    {
        flag=0;break;
    }
    if(flag==1)
    cout<<n<<"is a prime number.\n";
    else
    cout<<n<<"is not a prime number.\n";
}