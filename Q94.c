#include <stdio.h>

int main()
{
    char str[300], longest[100];
    int i = 0, len = 0, max = 0, start = 0, maxStart = 0, j;

    printf("Enter a sentence: ");
    fgets(str, 300, stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\n' && str[i] != '\0')
        {
            if(len == 0)
                start = i;
            len++;
        }
        else
        {
            if(len > max)
            {
                max = len;
                maxStart = start;
            }
            len = 0;
            if(str[i] == '\0')
                break;
        }
        i++;
    }

    for(j = 0; j < max; j++)
        longest[j] = str[maxStart + j];

    longest[j] = '\0';
    printf("Longest word: %s\n", longest);
    return 0;
}
