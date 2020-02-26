#include <stdio.h>
#include <cstdlib>
#include <conio.h>
int fun1();
int fun2(int arr[], int n);
int main()
{
    int *block_int;
    do
    {
        printf(" Dynamic memory allocation\n");
        int n = fun1();
        block_int = (int *)calloc(n, sizeof(int));
        if (block_int == NULL)
        {
        }
        printf("\tsum %d", fun2(block_int, n));
        printf("\nPress any key to continue\n");
        if (27 == getch())
            break;
    } while (true);
    free(block_int);
}
int fun1()
{
    int n;
    printf("\tNumber of element s = ");
    scanf("%d", &n);
    return n;
}

int fun2(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        printf("\tEnter an integer: ");
        scanf("%d", arr + i);
        sum = sum + arr[i];
    }
    return sum;
}