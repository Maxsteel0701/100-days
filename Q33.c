/* Q33: Check Armstrong number. */
#include <stdio.h>

int main()
{
    int n,t,d,count=0,sum=0,i,p;
    scanf("%d",&n);
    t=n;
    do
    {
        count++;
        t/=10;
    }
    while(t!=0);
    t=n;
    while(t!=0)
    {
        d=t%10;
        p=1;
        for(i=0;i<count;i++)p*=d;
        sum+=p;
        t/=10;
    }
    if(sum==n)printf("Armstrong number");
    else printf("Not Armstrong number");
    return 0;
}
