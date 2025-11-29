#include <iostream>
using namespace std;
int main()
{
    double value,sum=0.0;
    int n=0;

    cout<<"Please enter a value";
    cin>>value;

    while(sum<=value){
        n++;sum+=1.0/n;
    }
    cout<<"The minimun n is "<<n<<endl;
    return 0;
}