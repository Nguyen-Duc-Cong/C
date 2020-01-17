#include <stdio.h>
#include <math.h>
int Prime(int n);
int main()
{
    int n, i;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (Prime(i) == 1)
            printf("\n%d", i);
    }
    getchar();
    getchar();
    return 0;
}
int Prime(int n)
{
    int T, i;
    for (i = 2; i <= (int)sqrt(n); i++)
        if (n % i == 0)
            return 0;
    return 1;
}