#include <iostream>
#include <windows.h> 
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    int y;    double a,b;
   float sum=0.0;
cout<<"请选择：1.加法 2.减法 3.乘法 4.除法 "<<endl;
cin>>y;

cout<<"数值1？"<<endl;cin>>a;

cout<<"数值2？"<<endl;cin>>b;

    switch(y)
    {
        case 1:sum=a+b;break;
        case 2:sum=a-b;break;
        case 3:sum=a*b;break;
        case 4:
        if (b==0)
        {
            cout<<"错误：除数不能为零！"<<endl;
            return 1;
        }
        sum=a/b;break;
    }
    cout<<"结果为"<<sum<<endl;
    return 0;

}
