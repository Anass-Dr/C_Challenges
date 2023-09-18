#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;

    printf("Enter an alphabet: ");
    scanf("%c", &a);

    if (a >= 65 && a <= 90)
        printf("un alphabet majuscule\n");
    else
        printf("un alphabet non majuscule\n");
    return 0;
}