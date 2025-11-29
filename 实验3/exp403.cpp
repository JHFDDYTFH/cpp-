#include<iostream>
using namespace std;
int  main()
 { int i,n;double p;
   cout<<"n=";cin>>n;
   p=1.0;
   for(i=1;i<=n;i++)
     p*=i; 
   cout<<n<<"!="<<p<<endl;
}
