#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    printf("Entrer la moyenne: ");
    scanf("%d", &m);

    if (m < 10)
        printf("recale");
    else if (m >= 10 && m < 12)
        printf("passable");
    else if (m >= 12 && m < 14)
        printf("assez bien");
    else if (m >= 14 && m < 16)
        printf("bien");
    else if (m >= 16)
        printf("tres bien");
    else
        printf("Not a valid number\n");
    return 0;
}