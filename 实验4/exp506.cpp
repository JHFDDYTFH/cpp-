#include<iostream>
using namespace std;
int main(){
    int n=1;
    while(true)
    {
        int x=n;
        int i;
        for(i=0;i<5;i++)
        {
            if((x-1)%5!=0){
                break;
            }
            x=(x-1)/5*4;
        }
        if(i==5){
            cout<<"The smallest number is :"<<n<<endl;
            break;
        }
        else{
            n++;
        }
    
    }
    return 0;
}
