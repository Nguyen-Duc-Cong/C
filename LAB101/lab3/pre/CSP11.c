#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stireg.h>
#include <math.h>
void menu();
int validattion(int min, int max);
int biDec(char a[]);
int ocDec(char a[]);
int heDec(char a[]);
int conti();
int main()
{
    char a[1000];
    int running = 1;
    while (running)
    {
        menu();
        int chose = (validattion(1, 4));
        switch (chose)
        {
        case 1:
        {
            printf("Enter binary number: ");
            fflush(stdin);
            gets(a);
            printf("Decimal number is: %d", biDec(a));
            break;
        }
        case 2:
        {
            printf("Enter octal  number: ");
            fflush(stdin);
            gets(a);
            printf("Decimal number is: %d", ocDec(a));
            break;
        }
        case 3:
        {
            printf("Enter hexadecimal number: ");
            fflush(stdin);
            gets(a);
            printf("Decimal number is: %d", heDec(a));
            break;
        }
        case 4:
        {
            running = 0;
            break;
        }
        }
        printf("\n");
        getch();
        if (running != 1)
            running = conti();
        system("cls");
    }
    return 0;
}
void menu()
{
    printf("#######################################################################################\n");
    printf("#\t1.	Convert binary number to decimal number                         \t#\n");
    printf("#\t2.	Convert octal number to decimal number                          \t#\n");
    printf("#\t3.	Convert hexadecimal number to decimal number                    \t#\n");
    printf("#\t4.	Exit                                                            \t#\n");
    printf("#######################################################################################\n");
}
int validattion(int min, int max)
{
    int a;
    do
    {
        printf("Choice number(%d - %d ): ", min, max);
        scanf("%d", &a);
    } while (a < min || a > max);
    return a;
}
int conti()
{
    int i;
    do
    {
        printf("Press enter to continue, Esc to return the main menu\n");
        char in = getch();
        if (in == '\n')
        {
            i = 1;
            break;
        }
        else if (in == 27)
        {
            i = 2;
            break;
        }
    } while (true);
    return i;
}
int biDec(char a[])
{
    int coust = 0;
    int n = strlen(a);
    for (int i = 0; i < strlen(a); i++)
    {
        switch (a[i])
        {
        case '0':
            break;
        case '1':
            coust += pow(2, n - i - 1);
            break;

        default:
            printf("Input value have error");
            break;
        }
    }
    return coust;
}

int ocDec(char a[])
{
    int coust = 0;
    int n = strlen(a);
    for (int i = 0; i < strlen(a); i++)
    {
        switch (a[i])
        {
        case '0':
            break;
        case '1':
            coust += 1 * pow(8, n - i - 1);
            break;
        case '2':
            coust += 2 * pow(8, n - i - 1);
            break;
        case '3':
            coust += 3 * pow(8, n - i - 1);
            break;
        case '4':
            coust += 4 * pow(8, n - i - 1);
            break;
        case '5':
            coust += 5 * pow(8, n - i - 1);
            break;
        case '6':
            coust += 6 * pow(8, n - i - 1);
            break;
        case '7':
            coust += 7 * pow(8, n - i - 1);
            break;

        default:
            printf("Input value have error");
            break;
        }
    }
    return coust;
}
int heDec(char a[])
{
    int coust = 0;
    int n = strlen(a);
    char b[4] = "10";
    if (n == 2 && strcmp(a, b))
        return 16;
    for (int i = 0; i < strlen(a); i++)
    {
        switch (a[i])
        {
        case '0':
            break;
        case '1':
            coust += 1 * pow(16, n - i - 1);
            break;
        case '2':
            coust += 2 * pow(16, n - i - 1);
            break;
        case '3':
            coust += 3 * pow(16, n - i - 1);
            break;
        case '4':
            coust += 4 * pow(16, n - i - 1);
            break;
        case '5':
            coust += 5 * pow(16, n - i - 1);
            break;
        case '6':
            coust += 6 * pow(16, n - i - 1);
            break;
        case '7':
            coust += 7 * pow(16, n - i - 1);
            break;
        case '8':
            coust += 8 * pow(16, n - i - 1);
            break;
        case '9':
            coust += 9 * pow(16, n - i - 1);
            break;
        case 'A':
            coust += 10 * pow(16, n - i - 1);
            break;
        case 'B':
            coust += 11 * pow(16, n - i - 1);
            break;
        case 'C':
            coust += 12 * pow(16, n - i - 1);
            break;
        case 'D':
            coust += 13 * pow(16, n - i - 1);
            break;
        case 'E':
            coust += 14 * pow(16, n - i - 1);
            break;
        case 'F':
            coust += 15 * pow(16, n - i - 1);
            break;
        default:
            printf("Input value have error");
            break;
        }
    }
    return coust;
}