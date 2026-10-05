/* Q81: Count characters in string without built-in length. */
#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i,count=0;
    fgets(s,200,stdin);
    for(i=0;s[i]!='\0'&&s[i]!='\n';i++)count++;
    printf("%d",count);
    return 0;
}
