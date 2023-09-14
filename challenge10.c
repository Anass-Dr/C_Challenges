#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    char c;
    printf("Entrer un Character: ");
    scanf("%c", &c);

    switch (tolower(c))
    {
    case 'a':
        printf("une voyelle");
        break;
    case 'i':
        printf("une voyelle");
        break;
    case 'e':
        printf("une voyelle");
        break;
    case 'u':
        printf("une voyelle");
        break;
    case 'y':
        printf("une voyelle");
        break;
    case 'o':
        printf("une voyelle");
        break;
    default:
        printf("non voyelle");
    }
    return 0;
}