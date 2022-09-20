//输入三位数，提取个位十位百位
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d;
    printf("请输入一个三位数\n");
    scanf("%d",&a);
    b=a%10, c=((a%100)-b)/10, d = (a-b*10-c)/100;
    printf("%d", a);
    printf("的百位是%d",d);
    printf(",十位是%d",c);
    printf(",个位是%d\n",b);
    system("pause");

    return 0;

}