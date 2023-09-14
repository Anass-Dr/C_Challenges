#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Entrer nombre1: ");
    scanf("%d", &a);
    printf("Entrer nombre2: ");
    scanf("%d", &b);

    if (a == b)
    {
        printf("Result: %d", (a + b) * 3);
    }
    else
    {
        printf("Result: %d", (a + b));
    }
    return 0;
}