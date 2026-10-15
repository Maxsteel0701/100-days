#include <stdio.h>

int main()
{
    char a[200], b[200];
    int count[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(a, 200, stdin);
    printf("Enter second string: ");
    fgets(b, 200, stdin);

    for(i = 0; a[i] != '\0'; i++)
        if(a[i] != ' ' && a[i] != '\n')
            count[(unsigned char)a[i]]++;

    for(i = 0; b[i] != '\0'; i++)
        if(b[i] != ' ' && b[i] != '\n')
            count[(unsigned char)b[i]]--;

    for(i = 0; i < 256; i++)
    {
        if(count[i] != 0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");

    return 0;
}
