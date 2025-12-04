#include <iostream>
using namespace std;
int main(){
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4;j++)
        printf("%4d%4d",i,j);
        printf("\n");
    }
    return 0;
}