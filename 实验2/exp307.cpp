#include "iostream"
using namespace std;
int main()
{ int n; float y;
   cout<<"n=";cin>>n;
   if (n<=4){
   	y=1.0;}
   	else if(n>=5&&n<=8){
   	y=1.5;}
   	else if(n>=9&&n<=11){
   	y=2.0;}
   	else if(n>=12){
   	y=2.5;
	   }
   cout<<"y="<<y<<endl;
 return 0;
 }

