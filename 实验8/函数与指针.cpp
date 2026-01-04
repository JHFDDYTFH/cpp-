#include <iostream>
#include <windows.h>
using namespace std;
int swap(int m,int n)
{
    int z;
    z=m;
    m=n;
    n=z;
    cout<<"形参"<<"m="<<m<<",n="<<n<<endl;
    return 0;
}

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int m=3,n=5;
    swap(m,n);
    cout<<"实参"<<"m="<<m<<",n="<<n<<endl;
    return 0;


}