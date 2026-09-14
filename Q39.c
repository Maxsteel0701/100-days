/* Q39: Find product of odd digits. */

#include <stdio.h>
int main(){int n,d,p=1,found=0;scanf("%d",&n);while(n!=0){d=n%10;if(d%2!=0){p*=d;found=1;}n/=10;}if(found)printf("%d",p);else printf("No odd digit");return 0;}
