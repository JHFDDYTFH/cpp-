#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

class Student {
private:
    const string id;      // 常量成员：学号，初始化后不可修改
    string name;
    int age;
    static int totalStudents;   // 静态成员，统计学生总数

public:
    // 构造函数：初始化学号、姓名、年龄，并自动增加 totalStudents
    Student(const string& id_, const string& name_, int age_)
        : id(id_), name(name_), age(age_) {
        totalStudents++;
    }

    // 析构函数：学生对象销毁时，减少 totalStudents
    ~Student() {
        totalStudents--;
    }

    // 设置姓名
    void setName(const string& newName) {
        name = newName;
    }

    // 设置年龄
    void setAge(int newAge) {
        age = newAge;
    }

    // 获取学号（只读）
    string getId() const {
        return id;
    }

    // 获取姓名
    string getName() const {
        return name;
    }

    // 获取年龄
    int getAge() const {
        return age;
    }

    // 静态成员函数：获取当前学生总数
    static int getTotalStudents() {
        return totalStudents;
    }

    // 友元函数声明：输入学生信息
    friend void inputStudent(Student &s);
    // 友元函数声明：输出学生信息
    friend void printStudent(const Student &s);
};

// 初始化静态成员
int Student::totalStudents = 0;

// 友元函数：从键盘输入学生信息

void inputStudent(Student &s) {
    cout << "请输入姓名: ";
    cin >> s.name;
    cout << "请输入年龄: ";
    cin >> s.age;
}

// 友元函数：输出学生信息
void printStudent(const Student &s) {
    cout << "学号: " << s.id << ", 姓名: " << s.name << ", 年龄: " << s.age << endl;
}

int main() {
    SetConsoleOutputCP(65001);
 SetConsoleCP(65001); 
    int n;
    cout << "请输入学生人数: ";
    cin >> n;
    
    // 使用动态数组存储学生对象指针
    Student** students = new Student*[n];
    
    // 输入每个学生的信息
    for (int i = 0; i < n; i++) {
        string id, name;
        int age;
        
        cout << "\n请输入第 " << i + 1 << " 个学生的学号: ";
        cin >> id;
        cout << "请输入姓名: ";
        cin >> name;
        cout << "请输入年龄: ";
        cin >> age;
        
        // 创建学生对象（学号一旦确定就不可修改）
        students[i] = new Student(id, name, age);
    }
    
    // 输出所有学生信息
    cout << "\n==================" << endl;
    cout << "所有学生信息如下:" << endl;
    cout << "==================" << endl;
    for (int i = 0; i < n; i++) {
        cout << "第 " << i + 1 << " 个学生: ";
        printStudent(*students[i]);
    }
    
    // 输出学生总数
    cout << "\n当前学生总数: " << Student::getTotalStudents() << endl;
    
    // 演示修改学生信息（学号不能修改，但姓名和年龄可以修改）
    cout << "\n==================" << endl;
    cout << "演示修改学生信息:" << endl;
    cout << "==================" << endl;
    int index;
    cout << "请输入要修改的学生编号 (1-" << n << "): ";
    cin >> index;
    
    if (index >= 1 && index <= n) {
        string newName;
        int newAge;
        cout << "请输入新的姓名: ";
        cin >> newName;
        cout << "请输入新的年龄: ";
        cin >> newAge;
        
        students[index - 1]->setName(newName);
        students[index - 1]->setAge(newAge);
        
        cout << "\n修改后的学生信息: ";
        printStudent(*students[index - 1]);
    }
    
    
    return 0;
}