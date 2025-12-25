#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);
	SetConsoleCP(65001);
    int nums[]={1,2,3,4,5,9};
    int target=5;
    bool found=false;
    for(int i=0;i<6;i++)
    {
        for(int j=1;j<6;j++){
        if(nums[i]+nums[j]==target){
            cout<<i<<j<<endl;
            found=true;
        }
        
        }
    }
    if(!found)
    {
        cout<<"No such numbers"<<endl;
    }
return 0;
}
