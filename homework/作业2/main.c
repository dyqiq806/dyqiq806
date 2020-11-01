//
//  main.c
//  作业2
//
//  Created by dyqiq806 on 2020/10/24.
//

#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,sum,mul,avg,pfh,kf;
    scanf("%lf %lf %lf",&a,&b,&c);
    sum=a+b+c;
    mul=a*b*c;
    avg=sum/2;
    pfh=pow(sum,2);
    kf=sqrt(pfh);
    printf("sum=%lg/n,mul=%lg/n,avg=%lg/n,pfh=%lg/n,kf=%lg/n",sum,mul,avg,pfh,kf);
    return 0;
}
