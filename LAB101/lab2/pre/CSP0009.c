#include <stdio.h>
#include <conio.h>
void inputrr(int *A, int n);
void arroutput(int A[], int n);
int  minarr(int *A, int n, int *iMin);
int main()
{
    int n;
    printf("Please enter size of array: ");
    scanf("%d", &n);
    int A[n];
    inputrr(A,n);
    int iMin = 0 ;
    printf("The smallest element: %d  Its position: %d",minarr(A,n,&iMin),iMin);
    getch();
    return 0;
}
void inputrr(int *A, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &A[i]);
    }
}
void arroutput(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", A[i]);
    }
    printf("\n");
}
int  minarr(int *A, int n, int *iMin)
{
    int min = A[0];
    for (int i = 1; i < n; i++)
        if (A[i] < min)
            {
                min = A[i];
                *iMin = i;
            }
    return min;
}