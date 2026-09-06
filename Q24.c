/* Q24: Calculate electricity bill. */
#include <stdio.h>

int main()
{
    int u;
    float bill;
    scanf("%d",&u);
    if(u<=100)bill=u*5;
    else if(u<=200)bill=500+(u-100)*7;
    else if(u<=300)bill=1200+(u-200)*10;
    else bill=2200+(u-300)*12;
    printf("Bill = Rs %.2f",bill);
    return 0;
}
