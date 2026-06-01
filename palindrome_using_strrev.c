#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char rev[100];

    printf("Enter string: ");
    scanf("%s", str);

    strcpy(rev, str);

    strrev(rev);   // Note: Works in some compilers only

    if(strcmp(str, rev) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
