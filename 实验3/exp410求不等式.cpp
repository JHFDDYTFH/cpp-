#include <iostream>
using namespace std;
int main()
{
    int value;
    cout<<"please enter a value ";cin>>value;
    double sum=0.0;
    int n;
    for(n=1;;n++)
    { sum+=1.0/n;
    if(sum>value){
        break;
    }
}
    cout<<"The minimun n is "<<n;
    return 0;
}