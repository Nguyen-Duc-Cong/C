#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define MAXARR 50

void inputArr(int A[], int *N);
int PrMax(int A[], int N);
void OutputArr(int A[], int i, int N);
void InsertArr(int A[], int *N, int V, int x);
void ascending(int A[], int N);
void OutputOddArr(int A[], int f, int l);
int main()
{
    int A[50];
    int N = 0;
    int Us;
    do
    {
        printf("1-Add some new elements(input 0 to stop):\n");
        printf("2- Print out maximum value:\n");
        printf("3- Print out the product of odd elements in a range[a,b]:\n");
        printf("4- Insert an element at inputted location k:\n");
        printf("5- Print out the array in ascending order:\n");
        printf("0- Quit:\n");

        scanf("%d", &Us);
        switch (Us)
        {
        case 1:
        {
            inputArr(A, &N);
            break;
        }
        case 2:
        {
            printf("Maximum value: %d", PrMax(A, N));
            getch();
            break;
        }
        case 3:
        {
            int f;
            int l;
            printf("\nenter a:");
            scanf("%d", &f);
            printf("\nenter b:");
            scanf("%d", &l);
            OutputOddArr(A, f - 1, l);
            break;
        }
        case 4:
        {
            int V;
            int x;
            printf("New element: ");
            scanf("%d", &x);
            printf("Location: ");
            scanf("%d", &V);
            InsertArr(A, &N, V - 1, x);
            break;
        }
        case 5:
        {
            ascending(A, N);
            break;
        }
        case 0:
        {
            printf("\nbye");
            printf("Thit code build by Nguyen Duc Cong");
            Sleep(1000);
            break;
        }
        }
        system("cls");
    } while (Us != 0);
}

void inputArr(int A[], int *N)
{
    do
    {
        if (*N > MAXARR)
        {
            printf("\nMax value\n");
            break;
        }
        scanf("%d", &A[*N]);
        (*N)++;
    } while (A[*N - 1] > 0);
    (*N)--;
}
int PrMax(int A[], int N)
{
    int Max = A[0];
    for (int i = 0; i < N; i++)
        if (A[i] > Max)
        {
            Max = A[i];
        }
    return Max;
}
void OutputArr(int A[], int i, int N)
{
    for (int j = i; j < N; j++)
        printf("%d ", A[j]);
    getch();
}
void InsertArr(int A[], int *N, int V, int x)
{
    if (*N > MAXARR)
    {
        printf("\nMax value\n");
    }
    else
    {
        (*N)++;
        for (int i = *N; i > 0; i--)
            A[i + 1] = A[i];
        A[V] = x;
    }
}
void ascending(int A[], int N)
{
    int i, j;
    int minIndex;
    for (i = 0; i < N - 1; i++)
    {
        minIndex = i;

        for (j = i + 1; j < N; j++)
            if (A[minIndex] > A[j])
                minIndex = j;
        if (minIndex > i)
        {
            int t = A[minIndex];
            A[minIndex] = A[i];
            A[i] = t;
        }
    }
    OutputArr(A, 0, N);
}
void OutputOddArr(int A[], int f, int l)
{
    int mul = 0;
    for (int i = f; i < l; i++)
    {
        if (A[i] % 2 == 1)
           if (mul <= 0)
           {
               mul = A[i];
           }         
           else mul *= A[i];
    }
    printf("Product of odd elements in a range[a,b] it is: %d",mul);
    getch();
}

void SNT(int A[],)


