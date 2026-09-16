/* Q44: Sum series 1 + 3/4 + 5/6 + 7/8 + ... */
#include <stdio.h>

int main()
{
    int n,i;
    float sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)sum+=(float)(2*i-1)/(2*i);
    printf("%.2f",sum);
    return 0;
}
