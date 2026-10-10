#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a lowercase string: ");
    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("Uppercase string: %s", str);
    return 0;
}
