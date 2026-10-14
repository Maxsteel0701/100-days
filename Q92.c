#include <stdio.h>

int main()
{
    char str[200];
    int count[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            count[str[i] - 'a']++;
    }

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z' && count[str[i]-'a'] > 1)
        {
            printf("First repeating lowercase alphabet: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("No repeating lowercase alphabet\n");

    return 0;
}
