#include<iostream>
#include<cstdlib>
using namespace std;
int main(){
    int i,j,n,x1,x2,x,score=0;
    cout<<"Please enter any number :";cin>>n;
    srand(n);
    for(i=1;i<=10;i++)
    {
        x1=(rand()%90+10);
        x2=(rand()%90+10);
        for(j=i;j<=5;j++)
        {
        cout<<x1<<"+"<<x2<<"=";
cin>>x;
if(x==x1+x2&&j==1)
       {
        cout<<"Right!\n";score+=10;break;
       }
    else if(x==x1+x2)
{
    cout<<"Right!\n";break;
} 
else

    cout<<"Error!\n";
        }
    }
cout<<"score="<<score<<endl;
}