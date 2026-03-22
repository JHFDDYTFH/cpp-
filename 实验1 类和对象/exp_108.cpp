#include <iostream>
#include<windows.h>
using namespace std;

class Student
{
    private:
    const string id;
    string name;
    int age;
    static int  totalStudents;
    public:
    Student(string id, string m_name, int m_age) : id(id), name(m_name), age(m_age)
    {
        totalStudents++;
    }
    ~Student()
    {
        totalStudents--;
    }
    void setName(string m_name)
    {
        name=m_name;
    }
    void setAge(int m_age)
    {
        age=m_age;
    }
    friend void inputStudent(Student &s);
    friend void printStudent(const Student &s);
    friend int getTotalStudents();
};

int Student::totalStudents=0;

void inputStudent(Student &s)
{
    
    cout<<"Enter student name: ";
    cin>>s.name;
    cout<<"Enter student age: ";
    cin>>s.age;
}
void printStudent(const Student &s)
{
    cout<<"Student ID: "<<s.id<<endl;
    cout<<"Student name: "<<s.name<<endl;
    cout<<"Student age: "<<s.age<<endl;

}
int getTotalStudents()
{
    return Student::totalStudents;
}
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 

    Student s1("001","Alice",18);
    Student s2("002","Bob",19);

    cout<<"===初始化学生信息==="<<endl;
    printStudent(s1);
    printStudent(s2);

    cout<<"当前学生总数为："<<getTotalStudents()<<endl;

    cout<<"===修改学生信息==="<<endl;
    s1.setName("Alice");
    s1.setAge(19);
    inputStudent(s2);

    cout<<"===打印修改后的学生信息==="<<endl;
    printStudent(s1);
    printStudent(s2);

    cout<<"当前学生总数为："<<getTotalStudents()<<endl;

    return 0;
}
