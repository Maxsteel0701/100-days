/* Q82: Print each character of string on a new line. */

#include <stdio.h>
#include <string.h>
int main(){char s[200];int i;fgets(s,200,stdin);for(i=0;s[i]!='\0'&&s[i]!='\n';i++)printf("%c\n",s[i]);return 0;}
