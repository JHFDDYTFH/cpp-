#include <iostream>
#include <windows.h>
using namespace std;
struct Student{
    long ID;
    char name[20];
    float score;
    Student*next;
};
float averageScore(Student*stuArr,int count)
{
    float sum=0.0;
    Student*p=stuArr;
    for(int i=0;i<count;i++)
    {
        sum+=p->score;
        p++;
    }
    return sum/count;
}
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
   const int STUDENT_NUM=10;
    Student students[STUDENT_NUM]={
        {1001,"Alice",85.5,nullptr},
        {1002,"Bob",90.0,nullptr},
        {1003,"Charlie",78.5,nullptr},
        {1004,"David",92.0,nullptr},
        {1005,"Eva",88.0,nullptr},
        {1006,"Frank",75.5,nullptr},
        {1007,"Grace",95.0,nullptr},
        {1008,"Hannah",80.0,nullptr},
        {1009,"Ian",89.5,nullptr},
        {1010,"Jack",91.0,nullptr}
    };
    float avg=averageScore(students,STUDENT_NUM);
    cout<<"Average Score: "<<avg<<endl;
    return 0;
}
