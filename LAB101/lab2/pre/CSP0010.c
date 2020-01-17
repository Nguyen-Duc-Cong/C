#include <stdio.h>
#include <conio.h>
#define MAX 100
void arroutput(int A[], int n);
void removearr(int *A, int *n);
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
    printf("The original array:");
    arroutput(A, n);
    removearr(A, &n);
    printf("\nThe array after removing duplicate elements: ");
    arroutput(A, n);
    getch();
    return 0;
}

void arroutput(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void removearr(int *A, int *n)
{
    for (int i = 0; i < *n - 1 ; i++)
    {
        for (int j = i + 1; j < *n; j++)
        {
            if (A[i] == A[j])
            {

                for (int k = j; k < *n - 1; k++)
                {
                    A[k] = A[k + 1];
                }
                
                A[*n - 1] = NULL;
                *n = *n - 1;
            }
        }
    }
}
