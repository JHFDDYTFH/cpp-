#include "iostream"
using namespace std;
int main()
 { float x,sum,aver;int n;
   n=0;sum=0;
   
   for(cout<<"Please enter a number:",cin>>x;x>=0;"Please enter a number:",
   cin>>x)
   {
   sum+=x;
   n++;
   }
   aver=sum/n;
    cout<<"average="<<aver<<endl;

   return 0;
   
 }
