//
//  main.c
//  作业1
//
//  Created by dyqiq806 on 2020/10/23.
//

#include <stdio.h>

int main()
{
    int F,C,P;
    double K;
    scanf("%d",&F);
    P=(F-32);
    C=P*5/9;
    K=273.16+C;
    printf("C=%d,K=%g",C,K);
    return 0;
}
