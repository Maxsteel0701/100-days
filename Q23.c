/* Q23: Calculate library fine. */
#include <stdio.h>

int main()
{
    int d,fine;
    if(scanf("%d",&d)!=1)return 0;
    if(d>30)
    {
        printf("Membership Cancelled");
        return 0;
    }
    if(d<=0)fine=0;
    else if(d<=5)fine=d*2;
    else if(d<=10)fine=10+(d-5)*4;
    else fine=30+(d-10)*6;
    printf("Fine = Rs %d",fine);
    return 0;
}
