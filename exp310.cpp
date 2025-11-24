#include<iostream>
#include <windows.h> 
#include<cmath>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    double a,b,c,x1,x2,delta;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c=";cin>>c;
if(a!=0)//一元二次方程ax*x+bx+c=0
{
    delta=b*b-4*a*c;
    if(delta>0){
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }else if(delta==0){
        x1=x2=-b/(2*a);
    }else {
        cout<<"有两个虚根"<<endl;
        x1=x2=0;
    }

    
}
else if(b!=0)
{
   x1=x2=-c/b;
}else {
    if(c==0){
        cout<<"方程恒成立，无数解"<<endl;
    }else{
        cout<<"方程无解"<<endl;
    }
    x1=x2=0;
}
cout<<a<<" "<<b<<" "<<c<<" "<<"x1="<<x1<<"x2="<<x2<<endl;
    return 0;
}

