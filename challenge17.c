#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        if (c >= 65 && c <= 90)
            printf("un alphabet majuscule\n");
        else
            printf("un alphabet non majuscule\n");
    }
    else
        printf("Ne partie pas des alphabets");
    return 0;
}