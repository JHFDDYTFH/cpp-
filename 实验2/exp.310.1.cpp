#include<iostream>
#include<cmath>
using namespace std;

int main() {
    double a, b, c, x1, x2, delta;
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;
    cout << "c="; cin >> c;

    if (a != 0) {  // 一元二次方程 ax² + bx + c = 0
        delta = b * b-4 * a * c;
        if (delta > 0) {  // 两个不同实根
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b-sqrt(delta)) / (2 * a);
        } else if (delta == 0) {  // 两个相同实根
            x1 = x2 = -b / (2 * a);
        } else {  // 虚根（若要输出，需用复数，这里简化提示）
            cout << "有两个虚根" << endl;
            x1 = x2 = 0;  // 临时占位，实际场景需扩展复数逻辑
        }
    } else if (b != 0) {  // 一元一次方程 bx + c = 0
        x1 = x2 = -c / b;
    } else {  // a=0 且 b=0，常数方程
        if (c == 0) {
            cout << "方程恒成立，无数解" << endl;
        } else {
            cout << "方程无解" << endl;
        }
        x1 = x2 = 0;  // 临时占位
    }

    cout << "a=" << a << " b=" << b << " c=" << c << " x1=" << x1 << " x2=" << x2 << endl;
    return 0;
}