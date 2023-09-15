#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer le nombre de lignes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = n - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int x = 1; x <= i; x++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}