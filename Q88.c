#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
            str[i] = '-';
    }

    printf("New string: %s", str);
    return 0;
}
