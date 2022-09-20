//输入球的半径，求表面积和体积
#include <stdio.h>
#include <stdlib.h>
#include <cmath>

int main()
{
    int r , a, b ;
    double V, S, Pi = 3.1415926;
    printf("Please Enter An Integer For R\n");
    scanf("%d", &r );
    a = pow( r , 2 ) , b = pow( r , 3 );
    V = 3 / 4 * Pi * b , S = 4 * Pi * a;
    printf("The Volume Of The Spare Of Radius R is %lf\n" , V);
    printf("The Area Of The Spare Of Radius R is %lf\n", S);
    system("pause");

    return 0;
}