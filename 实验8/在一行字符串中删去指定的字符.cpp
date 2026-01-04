#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    char a[100], b[100];
    std::cout << "请输入第一个字符串：";
    std::cin.getline(a, 100);
    std::cout << "请输入你要减去的字符：";
    std::cin.getline(b, 100);

    for (int i = 0; a[i] != '\0'; ++i) {//不用指针，直接用数组下标
        bool remove = false;//初始不删除
        for (int j = 0; b[j] != '\0'; ++j) {
            if (a[i] == b[j]) { remove = true; break; }
        }
        if (remove) {
            int k = i;
            while (a[k] != '\0') { a[k] = a[k + 1]; ++k; }
            --i; // 调整索引以检查新字符
    }

    std::cout << "最后的字符串是：" << a << std::endl;
    return 0;
}