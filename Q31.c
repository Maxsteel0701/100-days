/* Q31: Print binary representation of a number. */

#include <stdio.h>
int main(){int n,b=0,p=1;scanf("%d",&n);if(n==0){printf("0");return 0;}while(n>0){b=b+(n%2)*p;p*=10;n/=2;}printf("%d",b);return 0;}
