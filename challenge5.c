#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, x2, y1, y2;
    printf("Distance entre deux points\n");
    printf("x1: ");
    scanf("%lf", &x1);
    printf("y1: ");
    scanf("%lf", &y1);
    printf("x2: ");
    scanf("%lf", &x2);
    printf("y2: ");
    scanf("%lf", &y2);
    printf("La distance entre les deux points est: %f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));
    return 0;
}