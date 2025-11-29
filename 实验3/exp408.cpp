#include <iostream>
using namespace std;
int main()
{
    float score;
    float max,min;
    int count=0;

    printf("请输入学生成绩（输入负数结束）:\n");
    while(1)
    {
        scanf("%f",&score);
if(score<0){
    break;
}
if(count==0){
    max=score;
    min=score;
}
else{
    if(score>max){
        max=score;
    }
    if(score<min){
        min=score;
    }
}
if(count==0){
    printf("没有输入有效成绩\n");
}else{
    printf("最高分：%.2\n",max);
    printf("最低分：%.2\n",min);
}
return 0;
    }
