#include <stdio.h>
#include <stdlib.h>
#define max 200
int full(int a[], int n)
{
    return (n == max);
}
int empty(int a[], int n)
{
    return (n == 0);
}
void input(int a[], int *pn)
{
    int i = -1;
    do
    {
        i++;
        printf("Enter a value: ");
        scanf("%d", &a[i]);
    } while (a[i] != 0);
    *pn = i;
}
int Min(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
            min = a[i];
    }
    return min;
}
void Sum(int a[], int n, int b, int c)
{
    int i, t = 0, d = 0;
    for (i = 0; i <= n; i++)
        if (a[i] >= b && a[i] <= c)
        {
            printf("%d  ", a[i]);
            t = t + a[i];
            d++;
        }
    printf("Sum of array in [%d,%d]: %d", a, b, t);
}
void Delete(int k, int a[], int *n)
{
    int i;
    for (i = k; i < *n - 1; i++)
        a[i] = a[i + 1];
    (*n)--;
}
void dsc(int *a, int n)
{
    int **adds = (int **)calloc(n, sizeof(int *));
    int i, j;
    for (i = 0; i < n; i++)
        adds[i] = &a[i];
    int *t;
    for (i = 0; i < n - 1; i++)
        for (j = n - 1; j > i; j--)
            if (*adds[j - 1] < *adds[j])
            {
                t = adds[j];
                adds[j] = adds[j - 1];
                adds[j - 1] = t;
            }
    for (i = 0; i < n; i++)
        printf("%d ", *adds[i]);
    free(adds);
}
int main()
{
    int n = 0, a[max];
    int b, c, choice, k;
    printf("---Menu:HungSE1407._.*");
    printf("\n 1- Enter an array:");
    printf("\n 2- Print out min value of array:");
    printf("\n 3- Print out the elements in a and b and their sum:");
    printf("\n 4- Delete an element at location k: ");
    printf("\n 5- Print out the array in descending order:");
    printf("\n 6- Quit.");
    do
    {
        printf("\n Your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            if (full(a, n))
                printf("\nThe array is full");
            else
            {
                input(a, &n);
                printf("Added!");
            }
            break;
        case 2:
            Min(a, n);
            break;
        case 3:
            printf("\nEnter a and b: ");
            scanf("%d%d", &b, &c);
            Sum(a, n, b, c);
            break;
        case 4:
            if (empty(a, n))
                printf("\n The array is empty");
            else
            {
                printf("Input a value:");
                scanf("%d", &k);
                Delete(k, a, &n);
            }
            break;
        case 5:
            dsc(a, n);
            break;
        default:
            printf("Your choice is quit. See you again.");
        }
    } while (choice > 0 && choice < 6);
    getchar();
    return 0;
}