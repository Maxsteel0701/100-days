/* Q78: Find sum of main diagonal elements. */

#include <stdio.h>
int main(){int a[20][20],n,i,sum=0,j;scanf("%d",&n);for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);for(i=0;i<n;i++)sum+=a[i][i];printf("%d",sum);return 0;}
