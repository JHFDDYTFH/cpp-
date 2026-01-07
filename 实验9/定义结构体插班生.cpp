#include <iostream>
using namespace std;
int main(){
    
    struct Student
    {
        int id;
        string name;
        char sex;
        int age;
    } stu = {1001, "Alice", 'F', 20};
    cout << "ID: " << stu.id <<",  Name: "<<stu.name<<",  Sex: "<<stu.sex<<",  Age: "<<stu.age<<"\n";

    return 0;
}