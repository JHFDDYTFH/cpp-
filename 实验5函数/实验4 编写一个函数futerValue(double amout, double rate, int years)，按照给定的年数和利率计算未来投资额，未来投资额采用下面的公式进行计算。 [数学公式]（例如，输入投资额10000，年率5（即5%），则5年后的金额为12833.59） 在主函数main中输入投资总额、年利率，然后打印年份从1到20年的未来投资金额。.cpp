#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
double futerValue(double, double, int); //函数声明
int main( )
{
	double amount, value, rate;
	cout<<" input amount: ";
	cin>>amount;  //输入投资额
	cout<<" input yearly interest rate: ";
	cin>>rate;  //输入年利率
	cout<<setw(8)<<"Years"<<setw(20)<<"Future Value"<<endl;
	cout.setf(ios::fixed);
①//请完成这部分内容
	return 0;
}
//amout：投资额
//rate: 年利率
//years: 年数
double futerValue(double amout, double rate, int years)
{
	②//请完成这部分内容
}
