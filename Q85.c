#include <stdio.h>
#include <string.h>

int main()
{
    char str[200], temp;
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, 200, stdin);
    len = strlen(str);

    if(str[len-1] == '\n')
    {
        str[len-1] = '\0';
        len--;
    }

    j = len - 1;
    for(i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
