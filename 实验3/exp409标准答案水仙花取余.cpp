#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    // 单层for循环：遍历所有3位数（100~999）
    for (int num = 100; num <= 999; num++) {
        a = num / 100;          // 拆分百位（如 153/100=1）
        b = (num / 10) % 10;    // 拆分十位（如 153/10=15，15%10=5）
        c = num % 10;           // 拆分个位（如 153%10=3）
        // 水仙花数判断条件（核心逻辑不变）
        if (a*a*a + b*b*b + c*c*c == num) {
            cout << num << " "; // 输出符合条件的数
        }
    }
    cout << endl;
    return 0;
}