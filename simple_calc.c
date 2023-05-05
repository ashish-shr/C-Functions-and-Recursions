/*WAP in C to create a menu driven program and perform following operations like add,sub,mul,div,modulus */
// Alternate way
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int sum(int, int);
int sub(int, int);
int divi(int, int);
int prod(int, int);
int rem(int, int);

int main()
{
    int option;
    do
    {
        int num1, num2;
        printf("**********Simple Calculator**********\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Remainder\n");
        printf("6. Exit\n");
        printf("Enter the option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("Enter the value for num1 and num2:\n");
            scanf("%d %d", &num1, &num2);
            printf("Total sum: %d", sum(num1, num2));
            printf("\nPress enter to continue...");
            getch();
            system("cls");
            break;
        case 2:
            printf("Enter the value for num1 and num2:\n");
            scanf("%d %d", &num1, &num2);
            printf("Total difference: %d", sub(num1, num2));
            printf("\nPress enter to continue...");
            getch();
            system("cls");
            break;
        case 3:
            printf("Enter the value for num1 and num2:\n");
            scanf("%d %d", &num1, &num2);
            printf("Total product: %d", prod(num1, num2));
            printf("\nPress enter to continue...");
            getch();
            system("cls");
            break;
        case 4:
            printf("Enter the value for num1 and num2:\n");
            scanf("%d %d", &num1, &num2);
            printf("Total division: %d", divi(num1, num2));
            printf("\nPress enter to continue...");
            getch();
            system("cls");
            break;
        case 5:
            printf("Enter the value for num1 and num2:\n");
            scanf("%d %d", &num1, &num2);
            printf("Total remainder: %d", rem(num1, num2));
            printf("\nPress enter to continue...");
            getch();
            system("cls");
        case 6:
            option = 6;
            break;
        default:
            printf("Invalid option! Press enter to continue...\n");
            getch();
            system("cls");
        }
    } while (option != 6);
    return 0;
}

int sum(int a, int b)
{
    return (a + b);
}

int sub(int a, int b)
{
    return (a - b);
}

int divi(int a, int b)
{
    return (a / b);
}

int prod(int a, int b)
{
    return (a * b);
}

int rem(int a, int b)
{
    return (a % b);
}
