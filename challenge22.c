#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, d = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i < 10; i++)
    {
        if (n % i == 0)
            d++;
    }

    if (d > 2)
        printf("N'est pas premier");
    else
        printf("Premier");
    return 0;
}