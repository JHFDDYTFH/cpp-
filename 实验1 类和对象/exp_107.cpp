#include <iostream>
#include <windows.h>
#include <cmath>
using namespace std;

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
        this->x=x;
        this->y=y;
    }
    double p1,p2;
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
    point p1(1,2),p2(3,4);
    Distance d;
    cout<<"Distance between p1 and p2 is "<<d.getDistance(p1,p2)<<endl;
    return 0;

}