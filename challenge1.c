#include <stdio.h>
#include <stdlib.h>

int main()
{
    char firstName[30], lastName[30], phoneNumber[10], sex[20];
    int age;

    printf("Welcome :)\n");
    printf("You have to provide some Info!\n");
    printf("First Name: ");
    scanf("%s", firstName);
    printf("Last Name: ");
    scanf("%s", lastName);
    printf("Age: ");
    scanf("%d", &age);
    printf("Sex: ");
    scanf("%s", sex);
    printf("Phone Number: ");
    scanf("%s", phoneNumber);
    printf("Your Infos are: \n");
    printf("Full Name: %s %s\n", firstName, lastName);
    printf("Age: %d\n", age);
    printf("Sex: %s\n", sex);
    printf("Phone Number: %s", phoneNumber);
    return 0;
}