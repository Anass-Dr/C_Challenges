#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre: ");
    scanf("%d", &n);

    if ((n % 2) == 0)
    {
        printf("The number is pair");
    }
    else
    {
        printf("The number is unpair");
    }
    return 0;
}