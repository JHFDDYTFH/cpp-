#include <iostream>
#include <cstring>
#include<windows.h>//包含能够处理字符串的函数头文件
using namespace std;
int main()
{
   SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    void smallest_string(char str[][30],int i);//函数声明
    int i;
    char country_name[3][30];
    for(i=0;i<3;i++){
    cout<<"输入第"<<(i+1)<<"个国家名";
    cin>>country_name[i];
    }//输入3个国家名
    smallest_string(country_name,3);//调用smmallest_string函数
    return 0;
}
void smallest_string(char str[][30],int n)
{
    int i;
    char string[30];//声明一个具有30个字符型元素的数组
    strcpy(string,str[0]);//使string的值为str[0]的值
for(i=0;i<n;i++)

if(strcmp(str[i],string)<0)//如果str[i]<string
strcpy(string,str[i]);//将str[i]中的字符串复制到string
 cout<<endl<<"the smallest string is:"<<string<<endl;
 //输出"最小"的字符串
}