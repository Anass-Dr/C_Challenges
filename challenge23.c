#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n, position = 0, numbers[20], somme = 0, max = 0;

    printf("Please Enter the numbers\n");
    printf("Note: if you finish type -1 to stop\n");

    while (true)
    {
        printf("-> ");
        scanf("%d", &n);

        if (n < 0)
            break;
        numbers[position] = n;
        position++;
        if (position == 20)
        {
            printf("You reach the max number of inputs!\n");
            break;
        }
    }

    for (int i = 0; i < position; i++)
    {
        int currNumber = numbers[i];
        if (currNumber < 100)
        {
            somme += currNumber;
            if (currNumber > max)
                max = currNumber;
        }
    }

    printf("Somme = %d, Max = %d", somme, max);
    return 0;
}