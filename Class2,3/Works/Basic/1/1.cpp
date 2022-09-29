//圆C：( x - 3 )^2 + ( y - 4 )^2 = 25；输入点P( x, y )的坐标值，判断P点在圆C 内还是在圆C外
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x=0 ,y=0, s=0;
    printf("请输入P点坐标值\n");
    scanf("%lf%lf",&x,&y);
    s = pow((x-3) , 2)+pow((y-4),2);
    if(s>25)
    {
        printf("P点在圆外\n");
    }
    else if (s==25)
    {
        printf ("P点在圆上\n");
    }
    else if (s<25)
    {
        printf("P点在圆内\n");
    }
    system ("pause");

    return 0;
}