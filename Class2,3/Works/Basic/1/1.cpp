//ԲC��( x - 3 )^2 + ( y - 4 )^2 = 25�������P( x, y )������ֵ���ж�P����ԲC �ڻ�����ԲC��
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x=0 ,y=0, s=0;
    printf("������P������ֵ\n");
    scanf("%lf%lf",&x,&y);
    s = pow((x-3) , 2)+pow((y-4),2);
    if(s>25)
    {
        printf("P����Բ��\n");
    }
    else if (s==25)
    {
        printf ("P����Բ��\n");
    }
    else if (s<25)
    {
        printf("P����Բ��\n");
    }
    system ("pause");

    return 0;
}