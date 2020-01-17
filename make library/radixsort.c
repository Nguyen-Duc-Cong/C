//https://www.codingeek.com/algorithms/radix-sort-explanation-pseudocode-and-implementation/
#include <stdio.h>
#include <stdlib.h>
int getMax(int A[], int n)
{
    int i;
    int max = A[0];
    for (i = 1; i < n; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    return max;
}
void radixSort(int A[], int n)
{
    int i, digitPlace = 1;
    int result[n]; 
    int largestNum = getMax(A, n);
    while (largestNum / digitPlace > 0)
    {
        int count[10] = {0};
        for (i = 0; i < n; i++)
            count[(A[i] / digitPlace) % 10]++; 
        for (i = 1; i < 10; i++)
            count[i] += count[i - 1];
        for (i = n - 1; i >= 0; i--)
        {
            result[count[(A[i] / digitPlace) % 10] - 1] = A[i];
            count[(A[i] / digitPlace) % 10]--;
        }
        //

        for (i = 0; i < n; i++)
            A[i] = result[i];
        digitPlace *= 10;
    }
}
void printArray(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", A[i]);
    printf("\n");
}
int main()
{
    int a[] = {209, 3, 48, 91, 66, 101, 30, 795};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Unsorted Array: ");
    printArray(a, n);
    radixSort(a, n);
    printf("Sorted Array: ");
    printArray(a, n);
    getchar();
    getchar();
    return 0;
}