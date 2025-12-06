#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    for(x=1;x<=20;x++)
    for(y=1;y<=33;y++){
        z=100-x-y;
        if(x*5+y*3+z/3==100)
        
            cout<<x<<" "<<y<<" "<<z<<endl;
        
    }
    return 0;
}