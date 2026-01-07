#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
	union Info//结构体数组新增变量
	{
	int id;
	char course[20];
	};

	struct Student
	{bool role; //0代表学生，1代表老师
	Info info;
int id;
string name;
char sex;
int age;
Student* next;
	};
	Student stua0, stua1, stua2, stub0, stub1, stub2, stub3, stunew, *stua, *stub, *p;
	
	stua0.role=0; stua0.info.id = 10101; stua0.name = "Xing"; stua0.sex = 'M'; stua0.age = 18;
	stua1.role=0; stua1.info.id = 10103; stua1.name = "Hao"; stua1.sex = 'F'; stua1.age = 17;
	stua2.role=1;strcpy(stua2.info.course,"English"); stua2.name = "Tang"; stua2.sex = 'F'; stua2.age = 36;
	stua =&stua0;
	stua0.next =& stua1;
	stua1.next =& stua2;
	stua2.next = NULL;
	

	stub0.role=0; stub0.info.id = 10102; stub0.name = "Sheng"; stub0.sex = 'M'; stub0.age = 19;
	stub1.role=0; stub1.info.id = 10104; stub1.name = "Jing"; stub1.sex = 'F'; stub1.age = 18;
	stub2.role=0; stub2.info.id = 10105; stub2.name = "Chen"; stub2.sex = 'M'; stub2.age = 16;
	stub3.role=1;strcpy(stub3.info.course,"Math"); stub3.name = "Long"; stub3.sex = 'M'; stub3.age = 41;
	stub = &stub0;
	stub0.next = &stub1;
	stub1.next = &stub2;
	stub2.next = &stub3;
	stub3.next = NULL;

	cout<<"Group A Students and Teachers："<<endl;
	p = stua;
	do
	{
	    if(p->role==0)
		cout<<"Student ID:"<<p->info.id<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		else
		cout<<"Teacher :"<<p->info.course<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		p = p->next;
	}while(p!=NULL);
	cout<<"\nGroup B Students and Teachers："<<endl;
	p = stub;
	do
	{
	    if(p->role==0)
		cout<<"Student ID:"<<p->info.id<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		else
		cout<<"Teacher :"<<p->info.course<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		p = p->next;
	}while(p!=NULL);
	return 0;
} 
