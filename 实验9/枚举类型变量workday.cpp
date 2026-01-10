#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001); 
    
    enum workday { Monday = 1, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday };

    struct Student
    {
        int id;
        string name;
        char sex;
        int age;
        workday day;
    };
    
    // 直接初始化GroupA的数据
    Student GroupA[2] = {
        {10101, "Xing", 'M', 18, Thursday},
        {10103, "Hao", 'F', 17, Tuesday}
    };
    
    // 直接初始化GroupB的数据
    Student GroupB[3] = {
        {10102, "Sheng", 'M', 19, Monday},
        {10104, "Jing", 'F', 18, Wednesday},
        {10105, "Chen", 'M', 16, Friday}
    };
   
    int i;
    cout << "Group A:" << endl;
    // 输出GroupA的学生信息
    for (i = 0; i < 2; i++)
    {
        cout << "ID:" << GroupA[i].id << ", Name:" << GroupA[i].name 
             << ", Sex:" << GroupA[i].sex << ", Age:" << GroupA[i].age << ", Workday:" << GroupA[i].day << endl;
    }
    
    cout << "\n\nGroup B：" << endl;
    // 输出GroupB的学生信息
    for (i = 0; i < 3; i++)
    {
        cout << "ID:" << GroupB[i].id << ", Name:" << GroupB[i].name 
             << ", Sex:" << GroupB[i].sex << ", Age:" << GroupB[i].age << ", Workday:" << GroupB[i].day << endl;
    }

    return 0;
} 