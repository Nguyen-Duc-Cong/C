#include <stdio.h>
int isFibonacci(int n);

int main()
{
    int n;
    printf("\nenter n:");
    do
    {
        scanf("%d", &n);
    } while (n < 1);
    if (isFibonacci(n) == 1)
        printf("\nIt is a Fibonacci element.");
    else
        printf("\nIt is not a Fibonacci element.");

    getchar();
    getchar();
    return 0;
}
int isFibonacci(int n)
{
    int t1 = 1, t2 = 1, f = 1;
    if (n == 1)
        return 1; 
    while (f < n) 
    {
        f = t1 + t2;
        t1 = t2;
        t2 = f;
    }
    return n == f; 
}
