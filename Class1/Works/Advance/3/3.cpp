//计算一天内两个时刻的时间差
#include <stdio.h>
#include <stdlib.h>

int A (int x)
{
    if (x<0)
    {
        x=-x;
    }
    return x;
}

int main()
{
    int h1, h2, h3, m1, m2, m3, s1, s2, s3, t;
    printf("时刻1:___时___分___秒\n");
    scanf("%d%d%d", &h1 , &m1 , &s1 );
    printf("时刻2:___时___分___秒\n");
    scanf("%d%d%d", &h2 , &m2 , &s2 );
    h3 = h1 - h2, m3 = m1 - m2, s3 = s1 - s2;
    A (h3);
    A (m3);
    A (s3);
    //  if (h3 < 0)
    //     {h3 = -h3;}

    //  if (m3 < 0)
    //      {m3 = -m3;}

    // if (s3 < 0)
    //     {s3 = -s3;}

    t=h3*3600+m3*60+s3;
    printf("这两个时刻相差%d",t);
    printf("秒\n");
    system("pause");

    return 0;
}