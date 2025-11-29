#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
int main()
    {
        int i,j=0,k,s=0;
        cout<<"Enter a number:"<<endl;
        cin>>k;
        for(i=1;i<=k;i++)
        {
            s=0;
            for(j=1;j<=i;j++)
            {
                s+=j;
            }
            cout<<s<<" ";
          
        }
       
    }
