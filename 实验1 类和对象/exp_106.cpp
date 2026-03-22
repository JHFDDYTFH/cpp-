#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
#define Max 1000

class Result
{ 
    public:
    int num;
    string name;
    double score[5];
    double average;
   
        Result()
        {
            num=0;
            name="";
            average=0;
            for(int i=0;i<5;i++)
            {
                score[i]=0;
            }
           
        }
        Result (int n,string s,double score[])
        {
            num=n;
            name=s;
            for(int i=0;i<5;i++)
            {
                this->score[i]=score[i];
            }
        }
};
 class studentbooks
{
    //参赛学生数组
    public:
    Result studentarr[Max];
    int m_Size;
};

void func1(studentbooks* ob)//输入参赛选手信息
{
    cout<<"请输入参赛人数：";
    int num;
    cin>>num;
    ob->m_Size=num;
    cout<<"请输入所有参赛选手的编号及姓名："<<endl;
    for(int i=0;i<num;i++)
    {
        
        cout<<"请输入第"<<i+1<<"位选手的编号及姓名：";
        cin>>ob->studentarr[i].num>>ob->studentarr[i].name;
    }
    system("pause");
    system("cls");
}

void func2(studentbooks* ob)//开始比赛
{
    cout<<"====五位裁判请为选手打分===="<<endl;
    for(int i=0;i<ob->m_Size;i++)
        {
            cout<<"\n正在打分:选手【"<<ob->studentarr[i].num<<"】"<<ob->studentarr[i].name<<endl;

            double sum=0;
            double maxScore=0;
            double minScore=10;

            for(int j=0;j<5;j++)
            {
                double s;
                while (true)
                {
                   cout<<"请第"<<j+1<<"位裁判打分（0-10分）：";
                   cin>>s;
                   if(s>=0&&s<=10)
                   {
                    break;
                   }
                   else 
                   {
                    cout<<"输入错误，请重新输入！"<<endl;
                   }
                   
                }
                ob->studentarr[i].score[j]=s;
                //计算总分、最高分和最低分
                sum+=ob->studentarr[i].score[j];
                if(ob->studentarr[i].score[j]>maxScore)
                {
                    maxScore=ob->studentarr[i].score[j];
                }
                if(ob->studentarr[i].score[j]<minScore)
                {
                    minScore=ob->studentarr[i].score[j];
                }
            }
            //去除最高分和最低分，计算平均分
            // 有多个最高分和最低分时，去除一个
double finalSum = 0;
int count = 0;
for (int k = 0; k < 5; k++) {
    // 跳过 1个最高分
    if (ob->studentarr[i].score[k] == maxScore) {
        maxScore = -1;  // 标记为已去掉
        continue;
    }
    // 跳过 1个最低分
    if (ob->studentarr[i].score[k] == minScore) {
        minScore = 11;  // 标记为已去掉
        continue;
    }
    // 剩下的分数累加
    finalSum += ob->studentarr[i].score[k];
    count++;
}
// 计算平均分
ob->studentarr[i].average = finalSum / count;

            
        
        cout<<"打分结束!"<<endl;
   system("pause"); 
   system("cls");        

}
}

void func3(studentbooks* ob)//输出比赛结果
{
    cout<<"====比赛结果===="<<endl;
    for(int i=0;i<ob->m_Size;i++)
    {
        cout<<"选手【"<<ob->studentarr[i].num<<"】"<<ob->studentarr[i].name<<"的平均分为："<<ob->studentarr[i].average<<endl;
    }
    system("pause"); 
    system("cls");        
}

    void menu()
    {
        cout<<"1.录入参赛选手信息"<<endl;
        cout<<"2.输入选手分数"<<endl;   
        cout<<"3.输出比赛结果"<<endl;
        system("pause");   
        system("cls");        
    }
int main()
{
    SetConsoleOutputCP(65001);
 SetConsoleCP(65001); 
    studentbooks ob;
    while (true)
    {
        menu();
        int select=0;
        cin>>select;
        switch(select)
        {
            case 1:
                func1(&ob);
                break;
            case 2:
                func2(&ob);
                break;
            case 3:
                func3(&ob);
                break;
            default:
                cout<<"输入错误，请重新选择！"<<endl;
        }
    }
    
    return 0;
}