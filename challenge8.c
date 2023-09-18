#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int n;
int position = 0;
int factors[5];
bool isDone = false;

void findReminder()
{
    for (int i = 0; i >= 0; i++)
    {
        if (pow(8, i) > n)
        {
            factors[position] = (int)(n / pow(8, i - 1));
            if (i - 1 == 0)
            {
                isDone = true;
            }
            else
            {
                n -= factors[position] * pow(8, i - 1);
                position++;
            }
            i = -2;
        }
    }
}

int main()
{
    char result[5];

    printf("Enter a number: ");
    scanf("%d", &n);

    while (!isDone)
    {
        findReminder();
    }
    printf("Octal = ");
    for (int j = 0; j <= position; j++)
    {
        printf("%d", factors[j]);
    }
    printf("\n");
    printf("Hexadecimal: %X", n);
    return 0;
}