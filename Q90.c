#include <stdio.h>

int main()
{
    char str[200];
    int i;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }

    printf("After toggling case: %s", str);
    return 0;
}
