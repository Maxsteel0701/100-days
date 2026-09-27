/* Q65: Binary search in sorted array. */

#include <stdio.h>
int main(){int a[100],n,x,l=0,r,mid,found=0,i;scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);r=n-1;while(l<=r){mid=(l+r)/2;if(a[mid]==x){printf("Found at position %d",mid+1);found=1;break;}else if(x<a[mid])r=mid-1;else l=mid+1;}if(!found)printf("Not found");return 0;}
