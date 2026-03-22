#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;
class point;

class Distance
{
    public:
    double getDistance(point& p1,point& p2);
};

class point
{
    private:
    double x,y;

    public:
    point(double a=0,double b=0)
    {
        this->x=a;
        this->y=b;
    }
    
    friend class Distance;
};

double Distance::getDistance(point& p1,point& p2)
{
    double dx=p1.x-p2.x;
    double dy=p1.y-p2.y;
    return sqrt(dx*dx+dy*dy);
}



int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    double x1,y1,x2,y2;
    cout<<"请输入第一个点的坐标："<<endl;
    cin>>x1>>y1;
    cout<<"请输入第二个点的坐标："<<endl;
    cin>>x2>>y2;
    point p1(x1,y1),p2(x2,y2);
    Distance d;
    cout<<fixed;
    cout.precision(2);
    cout<<"两点之间的距离为："<<d.getDistance(p1,p2)<<endl;
    return 0;
}
