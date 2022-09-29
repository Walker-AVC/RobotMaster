//键盘输入n，计算n的阶乘，用for语句来实现
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0, i=0, result=1;
    printf("请输入数字n\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        result=result*i;
    }
    printf("n的阶乘是%d",result);
    system("pause");

    
    return 0;
}