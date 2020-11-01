//
//  main.c
//  作业1
//
//  Created by dyqiq806 on 2020/10/23.
//

#include <stdio.h>

int main()
{
    double F,C,K;
    scanf("%lf",&F);
    C=(F-32.0)*5./9;//可以为C=5*(F-32.0)/9
    K=273.16+C;
    printf("C=%g,K=%g",C,K);
    return 0;
}
