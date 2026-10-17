#include <stdio.h>

int main()
{
    char name[200];
    int i, lastSpace = -1;

    printf("Enter full name: ");
    fgets(name, 200, stdin);

    for(i = 0; name[i] != '\0' && name[i] != '\n'; i++)
    {
        if(name[i] == ' ')
            lastSpace = i;
    }

    if(lastSpace == -1)
        printf("%s", name);
    else
    {
        printf("%c. ", name[0]);

        for(i = 1; i < lastSpace; i++)
        {
            if(name[i-1] == ' ' && name[i] != ' ')
                printf("%c. ", name[i]);
        }

        for(i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++)
            printf("%c", name[i]);

        printf("\n");
    }

    return 0;
}
