#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);
    printf("a + b = %f\n", (a + b) * 1.0);
    printf("a - b = %f\n", (a - b) * 1.0);
    printf("a * b = %f\n", (a * b) * 1.0);
    printf("a / b = %f\n", (a / b) * 1.0);
    printf("a %% b = %f\n", (a % b) * 1.0);
    return 0;
}