#include <iostream>
using namespace std;

class Date
{ private:
    int year,month,day;
  public:
	void set_date(int y=2000,int m=1,int d=1)  //对数据成员赋值
	{ year=y;month=m;day=d;}      
	int get_year()                        //返回year
	{ return year;}            
	int get_month()                      //返回month
	{ return month; }
	int get_day()                        //返回day
	{ return day; }
	int isleapyear(void);  
                //是闰年返回1,不是闰年返回0
	void print_date(void)
	{cout<<year<<'-'<<month<<'-'<<day<<endl;}
};
int Date::isleapyear(void)                 //是闰年返回1,不是闰年返回0
{ 
    if(year%4==0&&year%100!=0||year%400==0)
    return 1;
    else
    return 0;
}
int main(void)
{ Date da1,da2;
  int y,m,d;
  da1.set_date(2023,5,1);
  da1.print_date();
  cout<<"year=";cin>>y;
  cout<<"month=";cin>>m;
  cout<<"day=";cin>>d;
  da2.set_date(y,m,d);
  da2.print_date();
  int isleapyear=da2.isleapyear();
  if(isleapyear)
  cout<<"It is a leap year."<<endl;
  else
  cout<<"It is not a leap year."<<endl;
  return 0;
}
