#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    float n;
    cout<<"请输入体温"<<endl;cin>>n;
    if(n<36)
    {
        cout<<"体温偏低，请注意保暖"<<endl;
    }
    else if(n>=36&&n<=37.2)
    {
        cout<<"体温正常，祝您健康"<<endl;
    }
    else 
    cout <<"体温偏高，建议及时就医"<<endl;
    return 0;
}
