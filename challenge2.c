#include <stdio.h>
#include <stdlib.h>

int main()
{
    double temp_f, temp_c;
    printf("Entrer la temperature en Fahrenheit: ");
    scanf("%lf", &temp_f);

    temp_c = (temp_f - 32) * 5 / 9;
    printf("La temperature en celsius est: %f\n", temp_c);
    if (temp_c >= 40)
    {
        printf("très chaud :(");
    }
    else if (temp_c >= 30)
    {
        printf("chaud :)");
    }
    else if (temp_c >= 15)
    {
        printf("froid :)");
    }
    else
    {
        printf("très froid :(");
    }
    return 0;
}
