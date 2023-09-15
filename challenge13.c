#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year, choice, result;

    printf("Year Converter :)\n");
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Choose one of the folowing: \n");
    printf("1: Months\n");
    printf("2: Days\n");
    printf("3: Hours\n");
    printf("4: Minutes\n");
    printf("5: Seconds\n");
    printf("Just enter the choice number!\n");
    printf("-> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = year * 12;
        printf("Months: %d", result);
        break;
    case 2:
        result = year * 365;
        printf("Days: %d", result);
        break;
    case 3:
        result = year * 365 * 24;
        printf("Hours: %d", result);
        break;
    case 4:
        result = year * 365 * 24 * 60;
        printf("Minutes: %d", result);
        break;
    case 5:
        result = year * 365 * 24 * 60 * 60;
        printf("Seconds: %d", result);
        break;
    default:
        printf("Please provide a valid choice");
    }
    return 0;
}