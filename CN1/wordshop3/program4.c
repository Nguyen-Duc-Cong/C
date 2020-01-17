#include <stdio.h>
double factorial(int n);

int main()
{
    int n;
    printf("\nenter n:");
    do
    {
        scanf("%d", &n);
    } while (n < 0);
    printf("%.4lf",factorial(n));
    getchar();getchar();
    return 0;
}
double factorial(int n)
{
    double p = 1;
    int i;
    for (i = 2; i <= n; i++)
        p *= i;
    return p;
}
