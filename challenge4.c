#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, d, somme;

    printf("a: ");
    scanf("%lf", &a);
    printf("b: ");
    scanf("%lf", &b);
    printf("c: ");
    scanf("%lf", &c);
    printf("d: ");
    scanf("%lf", &d);

    somme = a + b + c + d;
    printf("Somme: %f\n", somme);
    printf("Moyenne: %f", somme / 4);
    return 0;
}