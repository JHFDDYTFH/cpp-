#include <iostream>
using namespace std;

int main() {
    double x1, y1, x2, y2, x, y;
    
    cout << "请输入第一个点P1的坐标(x1 y1): ";
    cin >> x1 >> y1;
    
    cout << "请输入第二个点P2的坐标(x2 y2): ";
    cin >> x2 >> y2;
    
    cout << "请输入要插值的x坐标: ";
    cin >> x;
    
    // 线性插值公式: y = y1 + (y2 - y1) * (x - x1) / (x2 - x1)
    if (x2 != x1) {
        y = y1 + (y2 - y1) * (x - x1) / (x2 - x1);
        cout << "在x = " << x << "处的线性插值结果为: y = " << y << endl;
    } else {
        cout << "错误：x1和x2不能相等，否则分母为零！" << endl;
    }
    
    return 0;
}
