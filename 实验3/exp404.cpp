#include<iostream>
using namespace std;
int main()
{
    char c;
    int n1=0,n2=0,n3=0;
    while(cin.get(c)&&c!='#')
    {
    if ((c>='a'&&c<='z')||(c>='A'&&c<='Z')) n1++;
    else if(c>='0'&&c<='9') n2++;
    else n3++;}
    cout<<"c_count="<<n1<<"n_cout="<<n2;
    cout<<"o_count="<<n3<<"\n";
}