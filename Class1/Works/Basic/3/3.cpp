//�Ӽ�������һ��r���������rΪ�뾶��������
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
    double r, V, Pi, t;
    Pi = 3.1415926;
    printf("��������İ뾶R\n");
    scanf("%lf", &r);
    t = pow(r,3);
    V=4/3*Pi*t;
    //printf ("�뾶Ϊ%lf", r);
    printf( "��������Ϊ%lf \n", V);
    system ("pause");

    return 0 ;
}