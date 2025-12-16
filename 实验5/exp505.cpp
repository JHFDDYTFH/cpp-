#include <iostream>
#include <cstdlib>//包含rand函数的头文件
#include <ctime>//包含time函数的头文件
#include <iomanip>//用于 setw函数
using namespace std;
int main()
{
    //1.设置随机种子：用当前时间作为随机数种子
    srand((unsigned int)time(NULL));
    //2.生成10个随机数并输出
    int a[10];
    for(int i=0;i<10;i++)
    {
        a[i]=rand()%100;//rand函数生成0~99之间的随机数
    }
    //升序排序冒泡
//1.外层一共循环九轮
for(int i=0;i<10-1;i++)
{//2.内层每次循环次数依次减少
    for(int j=0;j<10-1-1;j++)
    {
        if(a[j]>a[j+1])
        //交换两个数
        {
            int temp;
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
}

//3.输出排好序的数组元素，每行五个，每个占8列宽度
for(int i=0;i<10;i++)//不写i=1是因为这样只会访问a[1]~a[10],没有访问a[0]
{
    cout<<setw(8)<<a[i];
    if((i+1)%5==0)//不能用i%5==0,因为
    {
        cout<<endl;
    }
    
}
return 0;
}