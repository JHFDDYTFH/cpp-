#include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
   int i;
   int a[20]={1,1};
   for(i=2;i<20;i++)           //声明一个有20个整型元素的一维数组，并给前2个元素初值
   a[i]=a[i-1]+a[i-2];       ;  //求Fibonacci数列各元素值，用数组存储
   for(i=0; i<20; i++) { //此循环的作用是输出20个数
     if(i%5==0)  cout<<endl;//控制换行,每行输出5个数据
     cout<<setw(8)  <<a[i]     ;// 输出数据各项，每元素占8列宽度
   }
   cout<<endl;// 最后执行一次换行
   return 0;
 }

