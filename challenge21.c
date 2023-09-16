#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer le nombre de lignes: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int x = 1; x <= i + 1; x++)
        {
            printf("*");
        }
        for (int z = 0; z < i; z++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}