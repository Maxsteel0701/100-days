/* Q61: Linear search in array. */
#include <stdio.h>

int main()
{
    int a[100],n,i,x,found=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)if(a[i]==x)
    {
        printf("Found at position %d",i+1);
        found=1;
        break;
    }
    if(!found)printf("Not found");
    return 0;
}
