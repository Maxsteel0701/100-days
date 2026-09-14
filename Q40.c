/* Q40: Find 1's complement of a binary number. */

#include <stdio.h>
int main(){long long n,result=0,p=1;int d;scanf("%lld",&n);if(n==0){printf("1");return 0;}while(n>0){d=n%10;if(d==0)d=1;else d=0;result+=d*p;p*=10;n/=10;}printf("%lld",result);return 0;}
