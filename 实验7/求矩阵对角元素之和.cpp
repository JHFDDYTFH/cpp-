#include <iostream>
#include <windows.h>
using namespace std;
int main(){
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    //定义一个二维数组并初始化，
    int arry[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    //扫描这个二维数组//用嵌套循环，先读行，再读列
    int sum=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i==j)//注意对角线上元素下标的特征，a[0][0],a[1][1],a[2][2]
            {
                sum+=arry[i][j];//符合特征的数进行累加。
            }
        }
    }
    cout<<"对角线上的元素和为： "<<sum<<endl;
    return 0;
}