#include<iostream>
using namespace std;
int  main()
 { int i,n;double p;
    cout<<"n=";cin>>n;
    i=1,p=1.0;
   for(;i<=n;i++)
     p*=i; 
     
   cout<<n<<"!="<<p<<endl;
}
