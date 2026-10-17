#include <stdio.h>

int main()
{
    char name[200];
    int i;

    printf("Enter full name: ");
    fgets(name, 200, stdin);

    if(name[0] != ' ' && name[0] != '\n')
        printf("%c", name[0]);

    for(i = 1; name[i] != '\0'; i++)
    {
        if(name[i-1] == ' ' && name[i] != ' ' && name[i] != '\n')
            printf("%c", name[i]);
    }

    printf("\n");
    return 0;
}
