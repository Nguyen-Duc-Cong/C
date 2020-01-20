#include <stdio.h>
#include <conio.h>
void inPutArr(int *a, int n);
void arrOutPut(int a[], int n);
int  minArr(int *a, int n, int *iMin);
void swap(int &x, int &y);
void putin(int arr[], int n, int b);
void arrsOrted(int arr[], int n);
void appValue(int arr[], int n, int i);
int main()
{
    int n;
    int a[1000];
    printf("Please enter size of array: ");
    scanf("%d", &n);
    inPutArr(a,n);
    arrsOrted(a,n);
    printf("The array after sorting:\n");
    arrOutPut(a,n);
    printf("Please enter new value: ");
    int b;
    scanf("%d",&b);
    n = n + 1;
    putin(a,n,b);
    printf("New array:\n");
    arrOutPut(a,n);
    getch();
    return 0;
}
void putin(int arr[],int n, int b){
    if( arr[n-1] <= b )
        arr[n] = b;
    for (int i = 0; i < n;i++){
        if (arr[i] > b){    
            appValue(arr,n,i-1);
            arr[i-1] = b;
            break;
        }
    }
}
void appValue(int arr[], int n, int b){
    for (int i = n +1;i > b ;i--)
        arr[i]  = arr[i-1];
}

void inPutArr(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Enter element[%d]: ", i);
        scanf("%d", &a[i]);
    }
}

void arrOutPut(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
void arrsOrted(int arr[], int n)
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
void swap(int &x, int &y)
{
    int t;
    t = x;
    x = y;
    y = t;
}