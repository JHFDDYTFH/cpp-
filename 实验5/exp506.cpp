1 #include <iostream>
 2          //包含能够处理字符串的函数的头文件
 3 using namespace std;
 4 int main()
 5 {
 6   void smallest_string(char str[][30],int i);//函数声明
 7   int i;
 8   char country_name[3][30];//定义二维字符数组
 9   for(i=0; i<3; i++)
10                 //输入3个国家名
11                 ;//调用smallest_string函数
12   return 0;
13 }
14 
15 void smallest_string(char str[][30],int n)
16 {
17   int i;
18           ; //声明一个具有30个字符型元素的数组
19   strcpy(string,str[0]);//使string的值为str[0]的值
20   for(i=0; i<n; i++)
21     if(strcmp(str[i],string)<0)//如果str[i]<string
22       strcpy(string,str[i]);//将str[i]中的字符串复制到string
23   cout<<endl<<"the smallest string is:"<<string<<endl;
24 //输出"最小"的字符串
25 }
