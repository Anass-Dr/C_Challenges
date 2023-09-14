#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Entrer un nombre: ");
    scanf("%d", &n);
    printf("Octal: %o\n", n);
    printf("Hexadecimal: %X", n);
    return 0;
}