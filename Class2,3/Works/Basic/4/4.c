//��������n������n�Ľ׳ˣ���for�����ʵ��
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n = 0, i=0, result=1;
    printf("����������n\n");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        result=result*i;
    }
    printf("n�Ľ׳���%d",result);
    system("pause");

    
    return 0;
}