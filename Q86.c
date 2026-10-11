#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, j, len, flag = 1;

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
        if(str[i] != str[j])
        {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
