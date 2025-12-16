#include <iostream>
 using namespace std;
 int main()
 {
   void select_sort(int array[],int n);//函数声明
   int a[10],i;
   cout<<"enter the originl array:"<<endl;
   for(i=0; i<10; i++) //输入10个数
     cin>>a[i];
   cout<<endl;
    select_sort(a,10)      ;//函数调用,数组名作实参
   cout<<"the sorted array:"<<endl;
   for(i=0; i<10; i++) 
   cout<<a[i]<<" "      ; //输出10个已排好序的数
   cout<<endl;
   return 0;
 }
 void select_sort(int array[],int n)//形参array是数组名//冒泡排序
 {
  int i,j;
  for(i=0;i<n-1;i++)//遍历所有数
  {
    for(j=0;j<n-i-1;j++)
    {
      //如果前一个数大于后一个数，则交换两数
      if(array[j]>array[j+1])
      {
        int temp;
        temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
}

