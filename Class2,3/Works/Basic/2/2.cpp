//ĳ�˴�ĳ�쿪ʼ���������������������ʸ������Ժ�ĵ�n�죨��������n���Ǵ��㻹�ǆ���
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0, left=0;
    printf("����������\n");
    scanf("%d",&n);
    left = n%5;
    if (left != 0 && left <= 3)
    {
        printf("���ڴ���\n");
    }
    else
    {
        printf("����ɹ��\n");
    }
    system("pause");

    return 0;
}