#include <iostream>
using namespace std;
int main()
{
    int a[]={0,0,1,1,1,2,2,3,3,4};
    int n=sizeof(a)/sizeof(a[0]);
    int b[10]={0};
    int count=0;
    bool isExist=false;
    for(int i=0;i<n;i++)
    {
    
        isExist=false;
        
            for(int j=0;j<count;j++)
            {
            if(a[i]==b[j])
           {
            isExist=true;
            break;
           }
    
    }
    if(!isExist)
    {
        b[count]=a[i];
        count++;
    }
    }for(int k=0;k<count;k++)
    {
       cout<<b[k];
    }
    cout<<endl;
    int p= count;
        cout<<"the length is: "<<p<<endl;
    
return 0;
}