#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    char chars[4]; 
    int num = 0;    

    for (int i = 0; i < 4; ) {
        cout << "请输入第" << i + 1 << "个数字字符: ";
        char c;
        cin >> c;

        if (c >= '0' && c <= '9') {
            chars[i] = c;  
            i++;          
        } else {
            cout << "输入的不是数字字符，请重新输入！" << endl;
        }
    }

    for (int i = 0; i < 4; i++) {
        num = num * 10 + (chars[i] - '0');  
    }

    cout << "转换后的4位十进制整数为: " << num << endl;

    return 0;
}