#include <iostream>
#include <vector>
using namespace std;
#include <windows.h>

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    int n;
    cout << "请输入杨辉三角行数：";
    cin >> n;
    
    vector<int> row(n, 0);
    row[0] = 1;
    
    for (int i = 0; i < n; i++)
    {
        // 调整缩进
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << "  ";
        }
        
        // 从后往前计算，避免覆盖
        for (int j = i; j > 0; j--)
        {
            row[j] = row[j] + row[j-1];
        }
        
        // 输出当前行
        for (int j = 0; j <= i; j++)
        {
            cout << row[j] << "   ";
        }
        cout << endl;
    }
    
    return 0;
}