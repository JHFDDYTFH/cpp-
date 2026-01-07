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
	};
	Student  GroupA[2];
	Student  GroupB[3];
   
	int i;
	cout<<"Group A:"<<endl;
	for (i=0; i<2; i++)
	{
		cout<<"Student A"<<i+1<<endl;
		cout<<"ID:";
		cin>>GroupA[i].id;
		cout<<"Name:";
		cin>>GroupA[i].name;
		cout<<"Sex:";
		cin>>GroupA[i].sex;
		cout<<"Age:";
		cin>>GroupA[i].age;
		cout<<endl;
	}
	cout<<"Group A Students："<<endl;
	for (i=0; i<2; i++)
	{
cout<<"ID:"<<GroupA[i].id<<", Name:"<<GroupA[i].name<<", Sex:"<<GroupA[i].sex<<", Age:"<<GroupA[i].age<<endl;
	}
	cout<<"\n\nGroup B："<<endl;
	for (i=0; i<3; i++)
	{
		cout<<"Student B"<<i+1<<endl;
		cout<<"ID：";
		cin>>GroupB[i].id;
		cout<<"Name：";
		cin>>GroupB[i].name;
		cout<<"Sex：";
		cin>>GroupB[i].sex;
		cout<<"Age：";
		cin>>GroupB[i].age;
		cout<<endl;
	}
	cout<<"Group B Students："<<endl;
	for (i=0; i<3; i++)
	{
	cout<<"ID:"<<GroupB[i].id<<", Name:"<<GroupB[i].name<<", Sex:"<<GroupB[i].sex<<", Age:"<<GroupB[i].age<<endl;
	}

	return 0;
} 
