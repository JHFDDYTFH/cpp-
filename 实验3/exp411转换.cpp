#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    char chars[4];  // 存储4个数字字符
    int num = 0;    // 存储最终的4位十进制整数

    // 循环接收4个数字字符
    for (int i = 0; i < 4; ) {
        cout << "请输入第" << i + 1 << "个数字字符: ";
        char c;
        cin >> c;

        // 判断是否为数字字符
        if (c >= '0' && c <= '9') {
            chars[i] = c;  // 存储数字字符
            i++;           // 只有输入有效才移动到下一个位置
        } else {
            cout << "输入的不是数字字符，请重新输入！" << endl;
        }
    }

    // 将4个数字字符转换为4位十进制整数
    for (int i = 0; i < 4; i++) {
        num = num * 10 + (chars[i] - '0');  // 字符转数字并累加
    }

    // 输出结果
    cout << "转换后的4位十进制整数为: " << num << endl;

    return 0;
}