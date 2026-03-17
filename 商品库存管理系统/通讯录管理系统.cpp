#include <iostream>
#include <string>
#include <windows.h> 
#define Max 1000
using namespace std;
//设计联系人的结构体
//菜单界面
struct Person
{
    //姓名
    string m_Name;
    //性别 1女 2男
    int m_Sex;
    //年龄
    int m_Age;
    //电话号码
    string m_Phone;
    //地址
    string m_Address;
};
//设置通讯录结构体
struct AddressBooks
{
    //通讯录中联系人数组
    Person personArray[Max];
    //通讯录中当前人员个数
    int m_Size;
};
//1.添加联系人
void addPerson(AddressBooks*abs)
{
    //添加联系人之前先判断通讯录是否满了
    if(abs->m_Size==Max)
    {
        cout<<"通讯录已满，无法添加"<<endl;
        return;
    }
    else
    {   
        //添加联系人
        //姓名
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->personArray[abs->m_Size].m_Name=name;
        //性别
        cout<<"请输入性别："<<endl;
        cout<<"1.-----女-----"<<endl;
        cout<<"2.-----男-----"<<endl; 
        int sex=0;
        while(true)
        {
            cin>>sex;
            if(sex==1||sex==2)
            {
            abs->personArray[abs->m_Size].m_Sex=sex;
            break;
            }
            cout<<"输入错误，请重新输入"<<endl;
        }
        //年龄
        cout<<"请输入年龄："<<endl;
        int age=0;
        cin>>age;
        abs->personArray[abs->m_Size].m_Age=age;
        //电话号码
        cout<<"请输入电话号码："<<endl;
        string phone;   
        cin>>phone;
        abs->personArray[abs->m_Size].m_Phone=phone;
        //住址
        cout<<"请输入地址："<<endl;
        string address;
        cin>>address;
        abs->personArray[abs->m_Size].m_Address=address;
        //更新通讯录人数
        abs->m_Size++;
        cout<<"添加成功"<<endl;
        system("pause");//请按任意键继续  
        system("cls");//清屏
    }
}
//2.显示联系人
void showPerson(AddressBooks*abs)
{
    //判断是否为空
    if(abs->m_Size==0)
    {
        cout<<"通讯录为空"<<endl;
    }
    else
    {
        for(int i=0;i<abs->m_Size;i++)
        {
            cout<<"姓名："<<abs->personArray[i].m_Name<<"\t";
            cout<<"性别："<<(abs->personArray[i].m_Sex==1?"女":"男")<<"\t";
            cout<<"年龄："<<abs->personArray[i].m_Age<<"\t";
            cout<<"电话号码："<<abs->personArray[i].m_Phone<<"\t";
            cout<<"地址："<<abs->personArray[i].m_Address<<endl;
        }
    }
    system("pause");
    system("cls");
}
//检测输入的联系人是否存在，存在返回联系人在数组中的位置，不存在返回-1
//参数1：通讯录地址
//参数2：要检测的联系人姓名
int isExist(AddressBooks*abs,string name)
{
    for(int i=0;i<abs->m_Size;i++)
    {
        if(abs->personArray[i].m_Name==name)
        {
            return i;//找到了返回联系人在数组中的位置
        }
    }
    return -1;//没找到返回-1
}
//3.删除联系人
void deletePerson(AddressBooks*abs)
{
cout<<"请输入要删除的联系人姓名："<<endl;
string name;
cin>>name;
//return -1;//没找到返回-1
int ret=isExist(abs,name);
if(ret!=-1)
{
    //查到了此人，删除
for(int i=ret;i<abs->m_Size-1;i++)
{
    abs->personArray[i]=abs->personArray[i+1];
}
abs->m_Size--;//更新通讯录人数
cout<<"删除成功"<<endl;
}
else
{
    cout<<"查无此人"<<endl;
}
system("pause");
system("cls");
}
//4.查找联系人
void findPerson(AddressBooks*abs)
{
    cout<<"请输入要查找的联系人姓名："<<endl;
    string name;
    cin>>name;
    int ret=isExist(abs,name);
    if(ret!=-1)
    {
        cout<<"姓名："<<abs->personArray[ret].m_Name<<"\t";
        cout<<"性别："<<(abs->personArray[ret].m_Sex==1?"女":"男")<<"\t";
        cout<<"年龄："<<abs->personArray[ret].m_Age<<"\t";
        cout<<"电话号码："<<abs->personArray[ret].m_Phone<<"\t";
        cout<<"地址："<<abs->personArray[ret].m_Address<<endl;
    }
    else
    {
        cout<<"查无此人"<<endl;
    }
    system("pause");
    system("cls");
}
//5.修改联系人
void modifyPerson(AddressBooks*abs)
{
    cout<<"请输入要修改的联系人姓名："<<endl;
    string name;
    cin>>name;
    int ret=isExist(abs,name);
    if(ret!=-1)
    {
        //找到了此人
        //姓名
        string name;
        cout<<"请输入姓名："<<endl;
        cin>>name;
        abs->personArray[ret].m_Name=name;
        //性别
        cout<<"请输入性别："<<endl;
        cout<<"1.-----女-----"<<endl;
        cout<<"2.-----男-----"<<endl; 
        //性别输入检测
        int sex=0;
        while(true)
        {
            cin>>sex;
            if(sex==1||sex==2)
            {
                abs->personArray[ret].m_Sex=sex;
                break;
            }
            cout<<"输入错误，请重新输入"<<endl;
        }
        //年龄
        cout<<"请输入年龄："<<endl;
        int age=0;
        cin>>age;
        abs->personArray[ret].m_Age=age;
        //电话号码
        cout<<"请输入电话号码："<<endl;
        string phone;   
        cin >>phone;
        abs->personArray[ret].m_Phone=phone;
        //住址
        cout<<"请输入地址："<<endl;
        string address;
        cin>>address;
        abs->personArray[ret].m_Address=address;
        cout<<"修改成功"<<endl;
    }
    else{
        cout<<"查无此人"<<endl;
    }
    system("pause");
    system("cls");
}
//清空联系人
void clearPerson(AddressBooks*abs)
{
    abs->m_Size=0;
    cout<<"清空成功"<<endl;
    system("pause");
    system("cls");
}
void menu() {
    cout<<"************************"<<endl;
    cout<<"***** 1.添加联系人 *****"<<endl;
    cout<<"***** 2.显示联系人 *****"<<endl;
    cout<<"***** 3.删除联系人 *****"<<endl;
    cout<<"***** 4.查找联系人 *****"<<endl;
    cout<<"***** 5.修改联系人 *****"<<endl;
    cout<<"***** 6.清空联系人 *****"<<endl;
    cout<<"***** 0.退出通讯录 *****"<<endl; 
    cout<<"************************"<<endl;
}
int main()  
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    
    //创建通讯录结构体变量
    AddressBooks abs;
    //初始化通讯录中人员个数
    abs.m_Size=0;
    int select=0;
    while(true){
        menu();
        cin>>select;
        switch(select)
        {
            case 1:
           addPerson(&abs);//
            break;
        case 2:
            showPerson(&abs);
            break;
        case 3:
        deletePerson(&abs);
            //删除联系人"删除联系人"
            break;
        case 4:
        findPerson(&abs);
            //"查找联系人"
            break;
        case 5:
            //"修改联系人"
            modifyPerson(&abs);
            break;
        case 6:
            //"清空联系人"
            clearPerson(&abs);
            break;
        case 0:
            cout<<"欢迎下次使用"<<endl;
            system("pause");
            return 0;
            break;
        default:
            cout<<"输入错误"<<endl;
            break;
//菜单调用            


    system("pause");
    return 0;
}   
}
}