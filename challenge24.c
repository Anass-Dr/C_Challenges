#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char c;
    char number[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    sprintf(number, "%d", n);
    strrev(number);
    printf("%d", atoi(number));
    return 0;
}