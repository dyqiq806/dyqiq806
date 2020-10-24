//
//  main.c
//  作业2
//
//  Created by dyqiq806 on 2020/10/24.
//

#include <stdio.h>

int main()
{
    double pow(double x, double y);
    double sqrt(double x);
    double a,b,c,sum,mul,avg,pfh,kf;
    scanf("%lf %lf %lf",&a,&b,&c);
    sum=a+b+c;
    mul=a*b*c;
    avg=sum/2;
    pfh=pow(sum,2);
    kf=sqrt(pfh);
    printf("sum=%lf/n,mul=%lf/n,avg=%lf/n,pfh=%lf/n,kf=%lf/n",
           sum,mul,avg,pfh,kf);
    return 0;
}
