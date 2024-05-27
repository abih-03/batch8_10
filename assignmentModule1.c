#include <stdio.h>

void main() 
{
    char Name[30];
    char Address[200];
    char BirthDate[20];
    int Age;

    printf("Enter your name: ");    
    gets(Name);

    printf(" Enter your address: ");
    scanf("%s",&Address);
    gets(Address);
    
    printf("Enter your birth date (DD/MM/YYYY): ");
    scanf("%s",&BirthDate);
    gets(BirthDate);

    printf("Enter your age: ");
    scanf("%d",&Age);

    printf("\n");
    printf("Personal Information: \n");
    printf("-> Name: %s \n", Name);
    printf("-> Address: %s \n", Address);
    printf("-> Birth Date: %s \n", BirthDate);
    printf("-> age: %d \n", Age);

}
