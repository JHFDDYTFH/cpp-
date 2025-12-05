#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=i;j<=4;j++)
        printf("%d*%d=%2d",i,j,i*j);
        printf("\n");
    }
    return 0;
}