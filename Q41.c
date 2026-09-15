/* Q41: Swap first and last digit. */

#include <stdio.h>
int main(){int n,first,last,temp,p=1,m;scanf("%d",&n);last=n%10;m=n;while(m>=10){m/=10;p*=10;}first=m;temp=n-first*p-last;n=last*p+temp+first;printf("%d",n);return 0;}
