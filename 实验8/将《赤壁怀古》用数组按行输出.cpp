#include <iostream>
#include <windows.h>
using namespace std;

int main() { 
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    // 定义指针数组，每个元素指向《赤壁怀古》的一行（const char* 表示字符串常量）
    const char* ci[] = {
        "大江东去，浪淘尽，千古风流人物。",
        "故垒西边，人道是，三国周郎赤壁。",
        "乱石穿空，惊涛拍岸，卷起千堆雪。",
        "江山如画，一时多少豪杰。",
        "遥想公瑾当年，小乔初嫁了，雄姿英发。",
        "羽扇纶巾，谈笑间，樯橹灰飞烟灭。",
        "故国神游，多情应笑我，早生华发。",
        "人生如梦，一尊还酹江月。"
    };

    // 计算指针数组的元素个数（行数）
    int lineCount = sizeof(ci) / sizeof(ci[0]);

    // 遍历指针数组，逐行输出
    for (int i = 0; i < lineCount; ++i) {
        cout << ci[i] << endl; // 输出当前行，并换行
    }

    return 0;
}