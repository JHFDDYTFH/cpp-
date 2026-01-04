#include <iostream>
#include <windows.h>
#include <cmath> // 用于数学函数（如sin、cos）
using namespace std;

// 定义被积函数类型：输入double，返回double
typedef double (*FuncPtr)(double);

// 被积函数1：f(x) = x^2
double func1(double x) {
    return x * x;
}

// 被积函数2：f(x) = sin(x)
double func2(double x) {
    return sin(x);
}

// 被积函数3：f(x) = exp(x)（自然指数）
double func3(double x) {
    return exp(x);
}

// 积分计算函数（梯形法）
// 参数：被积函数指针、积分下限a、积分上限b、区间数n（n越大精度越高）
double integrate(FuncPtr f, double a, double b, int n) {
    double h = (b - a) / n; // 每个子区间的宽度
    double sum = 0.5 * (f(a) + f(b)); // 首尾项的一半
    
    // 累加中间项
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += f(x);
    }
    
    return sum * h; // 梯形法公式：h * (首尾项/2 + 中间项和)
}

int main() {
    // 定义函数指针数组，存储所有被积函数的地址
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    FuncPtr funcs[] = {func1, func2, func3};
    int funcCount = sizeof(funcs) / sizeof(funcs[0]); // 函数个数
    
    // 积分参数（示例：积分区间[0, 1]，区间数10000）
    double a = 0.0, b = 1.0;
    int n = 10000;

    // 遍历函数指针数组，逐个计算积分
    for (int i = 0; i < funcCount; ++i) {
        double result = integrate(funcs[i], a, b, n);
        cout << "第" << i+1 << "个函数的积分结果（区间[" << a << "," << b << "]）：" << result << endl;
    }

    return 0;
}
