//�����������ĸ����ֲ���ƽ��ֵ
#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,result;
    printf("�������ĸ����֣��м��ÿո�����������밴�س���\n");
    scanf("%lf%lf%lf%lf" , &a , &b , &c , &d ),
    result = (a+b+c+d)/4 ;
    printf("%lf", a);
    printf("  %lf", b);
    printf("  %lf", c);
    printf("  %lf", d);
    printf("��ƽ��ֵ��%lf\n",result);
    system("pause");

    return 0;

}