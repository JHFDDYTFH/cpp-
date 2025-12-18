#include <iostream>
 using namespace std;
 int main()
  {
   int i;
    int a[10]={0,1,2,3,4,5,6,7,8,9};//声明一个有10个整型元素的一维数组
    int start=0;
    int end=sizeof(a)/sizeof(a[0])-1; //计算数组的长度
    while(start<end){         ;  //用循环语句使数组元素的值为0～9
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;
    start++;
    end--;}
    for(i=0;i<10;i++)
    {
      cout<<a[i]<<" ";
    }    ;      //用循环语句倒序输出各元素
   cout<<endl;//换行
   return 0;
 }
