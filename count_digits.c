#include <stdio.h>

int main()
{
    char str[100];
    int count = 0;

    printf("Enter string: ");
    scanf("%s", str);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }

    printf("Digits = %d", count);

    return 0;
}
