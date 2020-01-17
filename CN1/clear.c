#include <stdio.h>
#include <math.h>
#include<windows.h>
int isVOwel(int c);
int sumDIvisors(int n);
int isPrime(int n);

int main()
{
    int n;
    int Us;
    int c;
    do
    {
        printf("\n1- Test vowel for a character");
        printf("\n2- Sum of divisors");
        printf("\n3- Test prime for an integer");
        printf("\n4- Quit\n");
        scanf("%d", &Us);
        switch (Us)
        {
        case 1:
            printf("Enter one character:");
            fflush(stdin);
            scanf("%s",&c);
            if (isVOwel(c) == 1)
                printf("Is is a vowel\n");
            else
                printf("Is is not a vowel\n");
            /* code */
            break;
        case 2:
            do
            {
                printf("Enter a positive integer:");
                scanf("%d", &n);
            } while (n <= 0);
            printf("Sum of it's divisors: %d\n", sumDIvisors(n));
            break;
        case 3:
            printf("Enter a positive integer:");
            scanf("%d", &n);
            if (isPrime(n) == 1)
                printf("Is is a Prime\n");
            else
                printf("Is is not a Prime\n");
            break;

        default:
            printf("good bye");
            break;
        }
    getchar(); getchar();
    system("cls");
    } while (Us >= 1 && Us < 4);
    return 0;
}

int isVOwel(int c)
{
    return (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U');
}

int sumDIvisors(int n)
{
    int s = 0, i;
    for (i = 1; i <= n / 2; i++)
        if (n % i == 0)
            s += i;
    return s;
}

int isPrime(int n)
{
    int i;
    for (i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}