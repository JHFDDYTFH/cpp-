#include <iostream>
using namespace std;
int main()
 {
   int a[2][3]={{1,2,3},{4,5,6}};//声明一个2行3列的整型数组并初始化
int b[3][2]={{1,4},{2,5},{3,6}};             //声明一个3行2列的整型数组
int  i,j;
   cout<<"array a:"<<endl;
    
    for(i=0;i<=1;i++){//用循环语句输出2行3列数组各元素
    for(j=0;j<=2;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
    }    
           
              //将 2行3列数组各元素送到3行2列数组适当的位置（转置）
    for(i=0;i<=1;i++){
    for(j=0;j<=2;j++){
        b[j][i] = a[i][j];
    }
    }

   cout<<"array b:"<<endl;
   
                  //按行输出后声明的数组中各元素
    for(i=0;i<=2;i++){
    for(j=0;j<=1;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
    }
        return 0;}
  

