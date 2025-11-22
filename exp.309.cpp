#include<math.h>
#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"���������ε�������a,b,c��"<<endl;
	cin>>a>>b>>c;
	if  ((a>0)&&(b>0)&&(c>0)&&((a+b)>c)&&((b+c)>a)&&((a+c)>b))/*�ж������Ƿ񹹳�������*/
	{
		if(a==b&&b==c) /*��������߾���ȣ���Ϊ�ȱ�������*/
		    cout<<"�ȱ�������"<<endl;
	    else
			if ((a==b)||(a==c)||(b==c)) /*���ֻ����������ȣ���ֻΪ����������*/
				cout<<"����������"<<endl;
			else
				if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a)) 
 /*������ߵ�ƽ���͵��ڵ�����ƽ������Ϊֱ��������*/
					cout<<"ֱ��������"<<endl;
				else
					cout<<"һ��������"<<endl;
		}
	else
	   cout<<"�������������"<<endl;
	return 0;
}

