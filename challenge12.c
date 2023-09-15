#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c, delta;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    delta = pow(b, 2) - 4 * a * c;
    if (delta > 0)
    {
        float x1 = (-b - sqrt(delta)) / (2 * a);
        float x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Equation accept deux solutions: x1= %f et x2= %f", x1, x2);
    }
    else if (delta == 0)
    {
        float x0 = -b / (float)(2 * a);
        printf("Equation accept un seul solution: x0= %.2f", x0);
    }
    else
    {
        printf("No solution available");
    }
    return 0;
}