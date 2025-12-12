#include <iostream>
using namespace std;
int main()
{
    int i;
    int a[10];
    for(i=0;i<10;i++)
    {
        a[i]=i;
    }
    for(i=9;i>=0;i--)
{
cout<<a[i]<<" ";
}
cout<<endl;
return 0;
}
