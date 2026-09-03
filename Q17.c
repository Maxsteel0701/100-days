/* Q17: Find and categorize roots of a quadratic equation. */

#include <stdio.h>
int main() { float a,b,c,d,x1,x2; scanf("%f%f%f",&a,&b,&c); d=b*b-4*a*c; if(d>0) { float s=0,guess=d/2; int i; for(i=0;i<20;i++){ if(guess!=0) guess=(guess+d/guess)/2; } s=guess; x1=(-b+s)/(2*a); x2=(-b-s)/(2*a); printf("Real and distinct roots: %.2f %.2f",x1,x2); } else if(d==0) printf("Real and equal roots: %.2f",-b/(2*a)); else printf("Imaginary roots"); return 0; }
