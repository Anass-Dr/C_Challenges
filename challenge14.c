#include <stdlib.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0)
        printf("Positif");
    else if (n < 0)
        printf("negatif");
    else
        printf("null");
    return 0;
}