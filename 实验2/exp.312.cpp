#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    int a,b,y;//a是年份，b是月份
    int x;//switch结构赋值
    cout<<"请输入年份"<<endl;cin>>a;
    cout<<"请输入月份"<<endl;cin>>b;
if (b==1||b==3||b==5||b==7||b==8||b==10||b==12)
{
    x=1;//case 1:月份为31天
}
else if(b==2)//判断是否为闰年
{
    if(a%4==0)
    {
        if(a%100==0)
        {if(a%400==0)
        x=2;//case 2:月份为29天
        else
        x=3;//case 3:月份为28天
        }
        else
        x=2;
    }
    else
    x=3;
}
else if(b==4||b==6||b==9||b==11){
x=4;//case 4:月份为30天
}
switch(x)
{
    case 1 :y=31;break;
    case 2 :y=29;break;
    case 3 :y=28;break;
    case 4 :y=30;break;
}
cout <<"月份天数为"<<y<<endl;
return 0;

}