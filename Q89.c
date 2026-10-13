#include <stdio.h>

int main()
{
    char str[200], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, 200, stdin);

    printf("Enter character to find: ");
    scanf("%c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
            count++;
    }

    printf("Frequency = %d\n", count);
    return 0;
}
