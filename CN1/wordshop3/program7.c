#include <stdio.h>
int sumDigits(int n);
int main()
{
    int n;
    int S;
    printf("\nenter n:");
    scanf("%d", &n);
    while (n >= 0)
    {
        printf("\nenter n:");
        scanf("%d", &n);
        if (n >= 0)
        {
            S = sumDigits(n);
            printf("%d",S);
        }
    };
    getchar();
    getchar();
    return 0;
}
int sumDigits(int n)
{
    int sum = 0; 
    do
    {
        int remainder = n % 10; 
        n = n / 10;
        sum += remainder;
    } while (n > 0);
    return sum;
}
