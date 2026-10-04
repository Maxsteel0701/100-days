/* Q79: Perform diagonal traversal. */

#include <stdio.h>
int main(){int a[20][20],n,i,j;scanf("%d",&n);for(i=0;i<n;i++)for(j=0;j<n;j++)scanf("%d",&a[i][j]);printf("Main diagonal: ");for(i=0;i<n;i++)printf("%d ",a[i][i]);printf("\nSecondary diagonal: ");for(i=0;i<n;i++)printf("%d ",a[i][n-1-i]);return 0;}
