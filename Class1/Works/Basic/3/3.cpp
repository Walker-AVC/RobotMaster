//从键盘输入一个r，并求出以r为半径的球的体积
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
    double r, V, Pi, t;
    Pi = 3.1415926;
    printf("请输入球的半径R\n");
    scanf("%lf", &r);
    t = pow(r,3);
    V=4/3*Pi*t;
    //printf ("半径为%lf", r);
    printf( "的球的体积为%lf \n", V);
    system ("pause");

    return 0 ;
}