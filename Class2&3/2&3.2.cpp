#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int gus = 0;
int num, a=0, b=0;
int numb[4];
void check(int x)
{
    int i = 0;
    while(i<4)
    {
        i++;
        int m = x % 10;
        int j = 0;
        while (j<4)
        {
            j++;
            if (m == numb[j])
            {
                b++;
                if ( j == i)
                {
                    a++;
                }
            }
        }
        x=x/10;
    }
}

int main()
{
    srand(time(0));
    num=rand()%9000+1000;
    int i = 0;
    while(i<4)                  //初始化数组
    {
        i++;
        numb[i]=0;
    }

    int j = 0;
    while(j<4)                  //把随机数输入数组
    {
        int m = num %10;
        j++;
        numb[j]=m;
        num/10;
    }
    printf("请输入你的答案\n");
    scanf("%d",&gus);
    check(gus);
    printf ("%dA%dB\n",a,b);
    system("pause");
    

    return 0;
}