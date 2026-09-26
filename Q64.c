/* Q64: Find most frequent digit in an integer. */
#include <stdio.h>

int main()
{
    long long n;
    int count[10]=
    {
        0
    }
    ,d,i,max=0,digit=0;
    scanf("%lld",&n);
    if(n==0)count[0]=1;
    while(n>0)
    {
        d=n%10;
        count[d]++;
        n/=10;
    }
    for(i=0;i<10;i++)if(count[i]>max)
    {
        max=count[i];
        digit=i;
    }
    printf("%d",digit);
    return 0;
}
