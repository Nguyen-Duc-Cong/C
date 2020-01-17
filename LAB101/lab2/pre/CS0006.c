#include <stdio.h>
#include <conio.h>
int arrsorted(int arr[], int n);
int swap(int &x, int &y);
int main()
{
    int n;
    printf("Please enter size of array: ");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &A[i]);
    }
    arrsorted(A, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
    for (int i = n - 1; i > -1; i--)
    {

        printf("%d\t", A[i]);
    }
    getch();
}
int arrsorted(int arr[], int n)
{
    int i, j;
    int haveSwap = 0;
    for (i = 0; i < n - 1; i++)
    {
        haveSwap = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                haveSwap = 1;
            }
        }
        if (haveSwap == 0)
        {
            break;
        }
    }
}
int swap(int &x, int &y)
{
    int t;
    t = y;
    x = y;
    y = t;
}