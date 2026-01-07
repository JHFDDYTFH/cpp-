#include <iostream>
#include <string>
#include<windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
	struct Student
	{
	int id;
        string name;
        char sex;
        int age;
        Student* next;
	};
	Student stua0, stua1, stub0, stub1, stub2, stunew, *stua, *stub, *p;
	stunew.id = 10106; stunew.name = "Wang"; stunew.sex = 'M'; stunew.age = 18;
	stunew.next = NULL;
	stua0.id = 10101; stua0.name = "Xing"; stua0.sex = 'M'; stua0.age = 18;
	stua1.id = 10103; stua1.name = "Hao"; stua1.sex = 'F'; stua1.age = 17;
	stua =&stua0;            ;
	stua0.next =& stua1;
	stua1.next = NULL;

	stub0.id = 10102; stub0.name = "Sheng"; stub0.sex = 'M'; stub0.age = 19;
	stub1.id = 10104; stub1.name = "Jing"; stub1.sex = 'F'; stub1.age = 18;
	stub2.id = 10105; stub2.name = "Chen"; stub2.sex = 'M'; stub2.age = 16;
	stub = &stub0;
	stub0.next = &stub1;
	stub1.next = &stub2;
	stub2.next = NULL;

	cout<<"Please input the choice of our new student Wang [A|B]:";
	char choice;
	cin>>choice;
	if (choice == 'A' || choice == 'a')
	{
	
        stunew.next = stua;
	}
	else
	{
		stunew.next = stub;         ;
	}

	cout<<"Group A Students："<<endl;
	p = stua;
	do
	{
		cout<<"ID:"<<p->id<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		p = p->next;             ;
	} while ( p!= NULL );  

	cout<<"\nGroup B Students："<<endl;
	p = stub;
	do
	{
		cout<<"ID:"<<p->id<<", Name:"<<p->name<<", Sex:"<<p->sex<<", Age:"<<p->age<<endl;
		p = p->next;
	} while ( p!= NULL );

	return 0;
}
