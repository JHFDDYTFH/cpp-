#include <iostream>
using namespace std;
int main()
{
    char name[20]="DELHIK";int length;
    char*p=name;
    length=0;
    while(*p!='\0')//通过指针来确定字符串的长度//\0表示字符串结束符
    {
        length++;
        p++;
    }   
    cout << "Length of the string is: " << length << endl;
    return 0;
}