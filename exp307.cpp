#include "iostream"
using namespace std;
int main()
{ int n,p; float y;
   cout<<"n=";cin>>n;
   if (n<=4){
   	p=1;}
   	else if(n>=5&&n<=8){
   	p=2;}
   	else if(n>=9&&n<=11){
   	p=3;}
   	else if(n>=12){
   		p=4;
	   }
   switch (p)
     { case 1: y=1.0; break;
       case 2: y=1.5; break;
       case 3: y=2.0; break;
       case 4: y=2.5 ;
     }
   cout<<"y="<<y<<endl;
 return 0;
 }

