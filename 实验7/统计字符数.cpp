#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001); 
    char arti[3][81] ={ "789abcXYZ!@#890defUVW$%^123ghiRST&*()456jklOPQ_+-789mnoMLK[]{}012pqrJIH|;:'345",  // 80字符
        "890defUVW#$%901ghiRST&*()234jklOPQ+-_890mnoMLK{}[]123pqrJIH:;\"'456stuHGF/.>789",  // 80字符（"转义为\"）
        "901ghiRST$&*012jklOPQ+-=901mnoMLK[]\\|345pqrJIH;\"'<678stuHGF,/?890vwxEDC>.<123"   // 80字符（\转义为\\）
    };
    //定义相应的变量，用于存放各统计量，
    int count_upper=0;
    int count_lower=0;
    int count_digit=0;
    int count_other=0;
    //按遍历二维数组的方法，逐个字符进行判断，
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<80;j++)
        {
            char current=arti[i][j];
            if(current >='A'&&current<='Z')
            {
                count_upper++;
            }
            else if(current >='a'&&current <='z')
            {
                count_lower++;
            }
            else if(current >='0'&&current <='9')
            {
                count_digit++;
            }
            else {
                count_other++;
            }

        }
    }
    cout<<"大写字母的个数为："<<count_upper<<endl;
    cout<<"小写字母的个数为："<<count_lower<<endl;
    cout<<"数字的个数为："<<count_digit<<endl;
    cout<<"其他字符的个数为："<<count_other<<endl;
    //进行累加统计，放在相应的变量中。
return 0;
}