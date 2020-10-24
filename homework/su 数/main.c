//
//  main.c
//  su 数
//
//  Created by dyqiq806 on 2020/10/19.
//

#include <stdio.h>
int main()
{
    int a,b,c;
    b=2;
    c=1;
    scanf("%d",&a);
    for (c=a%b;c!=0;c=a%b)
    {
            ++b;
    }
        if (b==a)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
}
