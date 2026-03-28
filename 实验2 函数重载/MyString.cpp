#include <iostream>
#include <cstring>
using namespace std;

class MyString {
    private:
    char*str;
    int length;
    public:
    MyString(const char*s=nullptr)
    {
        if(s==nullptr)
        {
            str==new char[1];
            str[0]='\0';
            length=0;
        }
    
    else
    {
        length=strlen(s);
        str=new char[length +1];
        strcpy(str,s);
    }
    }
    ~MyString()
    {
        delete[] str;
    }

MyString &operator=(const MyString&other)
{
    if(this==&other)
    {
        return *this;
    }
    delete []str;

    length=other.length;
    str=new char[length+1];
    strcpy(str,other.str);
    return *this;
}
void print()const{
    cout<<str<<endl;
}
};

int main()
{
    MyString s1("hello");
    MyString s2;

    cout<<"s1:";
    s1.print();

    s2=s1;
    cout<<"s2:";
    s2.print();

    MyString s3("Test");
    s3=s1;
    cout<<"s3:";
    s3.print();

    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
}