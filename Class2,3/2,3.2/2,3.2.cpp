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
        int j = 5;
        while (j>0)
        {
            j--;
            if ((m == numb[j]) && (j == i))
            {
                a++;
            }
            else if((m == numb[j]) && (j != i))
            {
                b++;
            }
            
        }
        x=x/10;
    }
}




int main()
{
    int as=0,Repeat = 0;
   do
    {   
        Repeat = 0;
        srand(time(0));
        num=rand()%8999+1000;
        as = num;
        //num=1234;                     测试用
        //printf("%d\n",num);           显示m，方便调试
        int i = 0;



        while(i<4)                  //初始化数组
        {
             i++;
            numb[i]=0;
        }

        int j = 0;
        int m;
        while(j<4)                  //把随机数输入数组
        {
            //printf("%d\n",m);
            m=num%10;
            j++;
            numb[j]=m;
            //printf("%d\n",numb[j]);                               测试用
            num/=10;
        }
        //printf("%d\n",num);                                       测试用
        //printf("%d%d%d%d\n",numb[1],numb[2],numb[3],numb[4]);     测试用
        
    }    
    while((numb[1]==numb[2]||numb[1]==numb[3]||numb[1]==numb[4]||numb[2]==numb[3]||numb[2]==numb[4]||numb[3]==numb[4])||Repeat != 0 );//四位均不相同
    {
        printf("%d",as);
        int life;
        for(life=0;life<10;life++)
        //while(life<10)
        {   
            //printf("a");
            //life=life+1;
            printf("请输入你的答案\n");
            scanf("%d",&gus);
            check(gus);    
            printf ("%dA%dB\n",a,b);
            a=0,b=0;
        }
    
        system("pause");
        return 0;
    };
    


}