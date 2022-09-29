//某人从某天开始“三天打鱼两天嗮网”，问该人在以后的第n天（键盘输入n）是打鱼还是嗮网
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n=0, left=0;
    printf("请输入天数\n");
    scanf("%d",&n);
    left = n%5;
    if (left != 0 && left <= 3)
    {
        printf("他在打鱼\n");
    }
    else
    {
        printf("他在晒网\n");
    }
    system("pause");

    return 0;
}