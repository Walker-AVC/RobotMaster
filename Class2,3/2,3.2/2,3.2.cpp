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
        
        int m = x % 10;
        int j = 0;
        while (j<4)
        {
            
            if ((m == numb[j]) && (j == i))
            {
                a++;
            }
            else if((m == numb[j]) && (j != i))
            {
                b++;
            }
            j++;
        }
        x=x/10;
        i++;
    }
}




int main()
{
    int as=0,Re=0 , re1=0, re2 =0, life = 0;  
   do
    {   
        
        srand(time(0));
        num=rand()%8999+1000;
        as = num;
        //num=1234;                     //������
        printf("%d\n",num);           //��ʾm���������
        int i = 0;



        while(i<4)                  //��ʼ������
        {
             i++;
            numb[i]=0;
        }

        int j = 0;
        int m;
        while(j<4)                  //���������������
        {
            //printf("%d\n",m);
            m=num%10;
            
            numb[j]=m;
            //printf("%d\n",numb[j]);                               //������
            num/=10;
            j++;
        }
        //printf("%d\n",num);                                       //������
        printf("%d%d%d%d\n",numb[0],numb[1],numb[2],numb[3]);     //������
        re1 = 0 ,re2 = 0, Re = 0;                                   //��ʼ��re1��re2��Re
        while (re1 <4)
        {
            //printf("a");
            re2=re1+1;
            while (re2<4)
            {
                if (numb[re1]==numb[re2])
                {
                    Re++;
                }
                re2++;
            }
            re1++;
        }
    
    }    
    while(Re != 0 );//��λ������ͬ
    //for(life=0;life<10;life++)
    while(life<10)
    {   
        //printf("a");
        life++;
        printf("��������Ĵ�\n");
        scanf("%d",&gus);
        check(gus);    
        printf ("%dA%dB\n",a,b);
        a=0,b=0;
    }
    
    system("pause");
    return 0;

    


}