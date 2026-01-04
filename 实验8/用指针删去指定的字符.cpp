#include<stdio.h>
#include<string.h>
int main( )
{
	char *str,*p,a[100],b[100],*t;
	str=a;p=b;
	printf("请输入你的字符串：");
		gets(str);
	printf("请输入你要减去的字符：");
	gets(p);
	for(;*str!='\0';str++)
		for(p=b;*p!='\0';p++)
		{
			if(*str==*p)
			{
				t=str;//t被赋值为str的地址
				for(;*t!='\0';t++)
				*t=*(t+1);//后一个数替换前一个数//循环结束
				*t='\0';//保证字符串正确
			}
		}
		str=a;//
		printf("最后的字符串是：");
		printf("%s\n",str);
    return 0;
}
