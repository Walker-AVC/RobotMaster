//������λ������ȡ��λʮλ��λ
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("������һ����λ��\n");
    scanf("%d",&a);
    b=a%10, c=((a%100)-b)/10, d = (a-b*10-c)/100;
    printf("%d", a);
    printf("�İ�λ��%d",d);
    printf(",ʮλ��%d",c);
    printf(",��λ��%d\n",b);
    system("pause");

    return 0;

}