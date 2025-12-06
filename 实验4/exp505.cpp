#include<iostream>
using namespace std;
int main(){
    int i,j;
    int count=0;
    for(i=100;i<=200;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            break;
            else if(j==i-1){
            cout<<i<<" ";
        count++;
        if(count%10==0)
        cout<<endl;    
        }
        }
    }

}