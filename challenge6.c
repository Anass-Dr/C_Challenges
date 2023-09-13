#include <stdlib.h>
#include <stdio.h>

int main()
{
    double rayon;

    printf("Circonference d'un cercle\n");
    printf("Entrer le rayon: ");
    scanf("%lf", &rayon);
    printf("la circonférence du cercle est: %f", 2 * 3.14 * rayon);
    return 0;
}