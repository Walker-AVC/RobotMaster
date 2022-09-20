//键盘上输入四个数字并求平均值
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,result;
    printf("请输入四个数字，中间用空格隔开，结束请按回车键\n");
    scanf("%lf%lf%lf%lf" , &a , &b , &c , &d ),
    result = (a+b+c+d)/4 ;
    printf("%lf", a);
    printf("  %lf", b);
    printf("  %lf", c);
    printf("  %lf", d);
    printf("的平均值是%lf\n",result);
    system("pause");

    return 0;

}