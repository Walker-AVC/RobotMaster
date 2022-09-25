#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int gus=0;
int num,a=0,b=0;
int numb[4];
void check(int x){
    int m;
    for(int i=0;i<=4;i++){
        m=x%10;
        //printf("%dm\n",m);
        for(int j=0;j<4;j++){
            if(numb[j]==m){
                b++;
                //printf("%db\n",b);
                if(i==j)a++;
                /*printf("%da\n",a);*/
            }
        }
        x/=10;
        //printf("%d ",x);
    }
}
int main(){
    srand(time(0));
    num=rand()%9000+1000;
    //printf("%d\n",num);
    for(int i=0;i<4;i++){
        numb[i]=0;
    }
    /*for(int i=0;i<4;i++){
        numb[num%10]=1;
        num/=10;
    }*/
    for(int i=0;i<4;i++){
        numb[i]=num%10;
        num/=10;
    }
    for(int i=0;i<10;i++){
        scanf("%d",&gus);
        check(gus);
        //printf("%d\n",gus);
        printf("%da%db\n",a,b);
        a=0;
        b=0;
    }
    system("pause");
    return 0;
}