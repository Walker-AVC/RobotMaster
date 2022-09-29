//键盘输入1~7，电脑打印出相应的星期，如：输入1，电脑显示星期一（用switch语句）
#include<stdio.h>
#include<stdlib.h>



int main()
{
    int input;
    printf("请输入第n天\n");
    scanf("%d",&input);
    switch(input)
    {   
        case 1:printf("星期一\n");break;
        case 2:printf("星期二\n");break;
        case 3:printf("星期三\n");break;
        case 4:printf("星期四\n");break;
        case 5:printf("星期五\n");break;
        case 6:printf("星期六\n");break;
        case 7:printf("星期日\n");break;
    }
    system("pause");

    return 0;
}