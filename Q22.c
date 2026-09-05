/* Q22: Find profit or loss percentage. */

#include <stdio.h>
int main(){float cp,sp,p;scanf("%f%f",&cp,&sp);if(sp>cp){p=(sp-cp)*100/cp;printf("Profit = %.2f%%",p);}else if(cp>sp){p=(cp-sp)*100/cp;printf("Loss = %.2f%%",p);}else printf("No profit no loss");return 0;}
