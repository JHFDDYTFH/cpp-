#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    for(x=1;x<=20;x++)
    for(y=1;y<=(100-5*x)/3;y++){
        z=100-x-y;
        if(x*15+y*9+z==300)
        
            cout<<x<<" "<<y<<" "<<z<<endl;
        
    }
    return 0;
}