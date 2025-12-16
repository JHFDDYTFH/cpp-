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
 void select_sort(int array[],int n)//形参array是数组名//不会啊啊啊啊啊啊啊啊啊
 {
  int i, j, min_idx, temp;
    // 外层循环：遍历待排序区间的起始位置
    for (i = 0; i < n - 1; i++) {
        min_idx = i; // 假设当前起始位置是最小值的下标
        // 内层循环：找剩余区间的最小值下标
        for (j = i + 1; j < n; j++) {
            if (array[j] < array[min_idx]) {
                min_idx = j;
            }
        }
        // 交换当前起始位置和最小值的位置
        temp = array[i];
        array[i] = array[min_idx];
        array[min_idx] = temp;
    }           //排序
 }
