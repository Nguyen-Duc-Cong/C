#include <stdio.h>
#include <math.h>
#include <windows.h>

int prime(int n);
void printMinMaxDigits(int n);

int main()
{
    int n;
    int Us;
    do
    {
        printf("\n1-Process primes");
        printf("\n2-Print min, max digit in an integer");
        printf("\n3-Quit\n");
        do
        {
            scanf("%d", Us);
        } while (n < 0 && n < 3);
        if (Us == 3)
            break;
        switch (Us)
        {
            {
            case 1:
                do
                {
                    printf("\n enter n:");
                    scanf("%d", &n);
                } while (n < 0);
                if (prime(n) == 1)
                    printf("It is a prime\n");
                else
                    printf("It is not a prime\n");
                break;
            case 2:
                do
                {
                    printf("\n enter n:");
                    scanf("%d", &n);
                } while (n < 0);
                printMinMaxDigits(n);
                break;
            }
        }

        getchar();
        getchar();
        system("cls");
    } while (Us >= 1 && Us < 4);
    return 0;
}

int prime(int n)
{
    int i;
    for (i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}
void printMinMaxDigits(int n)
{
    int digit;
    int min, max;
    digit = n % 10;
    n = n / 10;
    min = max = digit;
    while (n > 0)
    {
        digit = n % 10;
        n = n / 10;
        if (min > digit)
            min = digit;
        if (max < digit)
            max = digit;
    }
    printf(" max:%d, min:%d", max, min);
}
