#include <stdio.h>
#include <stdlib.h>

int main()
{
    char days[][10] = {
        "Lundi",
        "Mardi",
        "Mercredi",
        "Jeudi",
        "Vendredi",
        "Samedi",
        "Dimanche"};

    printf("%s", days[rand() % 6]);
    return 0;
}