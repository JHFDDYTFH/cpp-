#include <iostream>
using namespace std;
int main()
{
    float x,sum,aver;int n;
    n=0;sum=0;
    do
    {
    cout<<"Please enter a number:";
    cin>>x;
    if (x>=0)
    {
sum+=x; n++;}
    }while(x>=0);
    if(n>0)
    {aver=sum/n;
    cout<<"average="<<aver<<endl;
}
else{
    cout<<"没有输入有效的非负数，无法计算平均值"<<endl;
}

    }
