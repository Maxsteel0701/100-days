/* Q51: Print right-aligned 5, 45, 345, 2345, 12345 pattern. */

#include <stdio.h>
int main(){int i,j,s;for(i=5;i>=1;i--){for(s=1;s<i;s++)printf(" ");for(j=i;j<=5;j++)printf("%d",j);printf("\n");}return 0;}
