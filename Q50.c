/* Q50: Print decreasing right-shifted star pattern. */

#include <stdio.h>
int main(){int i,j,s;for(i=5;i>=1;i--){for(s=0;s<5-i;s++)printf(" ");for(j=1;j<=i;j++)printf("*");printf("\n");}return 0;}
