#include <stdio.h>
#include <string.h> // 用于strcmp函数
#include<windows.h>
int main() {
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    // 1. 定义字符指针数组，存储多个字符串（指针指向各字符串）
    char *str_arr[] = {"banana", "apple", "orange", "grape", "pear"};
    int n = sizeof(str_arr) / sizeof(str_arr[0]); // 计算字符串个数
    
    // 2. 选择排序法：按字母顺序排序
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; // 假设当前i是最小字符串的下标
        // 找当前轮的最小字符串
        for (int j = i + 1; j < n; j++) {
            // 用strcmp比较：str1 < str2 时返回负数
            if (strcmp(str_arr[j], str_arr[min_idx]) < 0) {
                min_idx = j;
            }
        }
        // 交换指针（不是交换字符串内容）
        char *temp = str_arr[i];
        str_arr[i] = str_arr[min_idx];
        str_arr[min_idx] = temp;
    }
    
    // 3. 输出排序后的字符串
    printf("排序后的字符串：\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", str_arr[i]);
    }
    
    return 0;
}