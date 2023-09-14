#include <stdlib.h>
#include <stdio.h>

int main()
{
    char number[3];

    printf("Entrer un Nombre: ");
    scanf("%s", &number);
    printf("Result: %c%c%c", number[2], number[1], number[0]);
    return 0;
}