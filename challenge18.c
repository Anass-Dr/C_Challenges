#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int day, month, year;
    char monthNoun[10];
    printf("Enter the date format: ");
    scanf("%d/%d/%d", &day, &month, &year);

    switch (month)
    {
    case 1:
        strcpy(monthNoun, "January");
        break;
    case 2:
        strcpy(monthNoun, "Febrary");
        break;
    case 3:
        strcpy(monthNoun, "Mars");
        break;
    case 4:
        strcpy(monthNoun, "April");
        break;
    case 5:
        strcpy(monthNoun, "May");
        break;
    case 6:
        strcpy(monthNoun, "Juin");
        break;
    case 7:
        strcpy(monthNoun, "Juillet");
        break;
    case 8:
        strcpy(monthNoun, "Aout");
        break;
    case 9:
        strcpy(monthNoun, "September");
        break;
    case 10:
        strcpy(monthNoun, "October");
        break;
    case 11:
        strcpy(monthNoun, "November");
        break;
    case 12:
        strcpy(monthNoun, "December");
        break;
    }

    printf("%d-%s-%d", day, monthNoun, year);
    return 0;
}