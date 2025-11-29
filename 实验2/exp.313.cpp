#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    char p,q;//a是剪刀，b是石头，c是布
    cout <<"玩家一选择: a.剪刀 b.石头 c.布"<<endl;cin>>p;
    cout <<"玩家二选择: A.剪刀 B.石头 C.布"<<endl;cin>>q;
    if((p=='a'&&q=='A')||(p=='b'&&q=='B')||(p=='c'&&q=='C'))
        {
          cout<<"平局！"<<endl;
        }
        else if((p=='a'&&q=='C')||(p=='b'&&q=='A')||(p=='c'&&q=='B'))
        {
            cout<<"玩家一获胜"<<endl;
        }
    else 
    cout<<"玩家二获胜"<<endl;
    return 0;
        }



