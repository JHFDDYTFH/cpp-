#include <iostream>
using namespace std;
int main()
{
	char a[30]="C program.";
	char b[30],*p1,*p2;
	p1=a; p2=b;
	 for( ;*p1!='\0';p1++,p2++) //当串1没有到串尾时，进行复制
    *p2=*p1;
	* p2='\0';	//给串2加上结束标志
	cout<<"string a is:"<<a<<endl;
	cout<<"string b is:"<<b;
	return 0;

}
