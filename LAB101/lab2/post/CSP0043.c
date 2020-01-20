#include <stdio.h>
#include <windows.h>
#include <conio.h>
#define MAX 100
void menu();
int validattion(int min, int max);
void printarr(int *a, int n);
void Search(int *a, int n, int x);
void inputArr(int *a, int n);
void Search(int *a, int n, int x);
void range(int *a, int n, int min, int max);
void arrsOrted(int arr[], int n, int chose);
void swap(int &x, int &y);
void removearr(int *a, int *n, int nuber, int chose);
int main()
{
    int a[MAX];
    int n = 0;
    int running = 1;
    while (running)
    {
        int n = 0;
        int a[100];
        menu();
        int chose = (validattion(1, 5));

        switch (chose)
        {
        case 1:
        {
            printf("\nAdd  a value:");
            n++;
            inputArr(a, n);
            break;

            break;
        }
        case 2:
        {
            int x;
            printf("\nSearch a value:");
            scanf("%d", &x);
            Search(a, n, x);
            getch();
            break;
        }
        case 3:
        {
            printarr(a, n);
            getch();
            break;
        }
        case 4:
        {
            int nuber;
            printf("chose number: ");
            scanf("%d", &nuber);
            removearr(a,&n, nuber, 0);
            break;
        }
        case 5:
        {
            int nuber;
            printf("chose number: ");
            scanf("%d", &nuber);
            removearr(a,&n, nuber, 1);
            break;
        }

        case 6:
        {
            arrsOrted(a, n, 0);
            break;
        }

        case 7:
        {
            arrsOrted(a, n, 1);
            break;
        }

        case 8:
        {
            running = 0;
            break;
        }
        }
        system("cls");
    }
    return 0;
}

void menu()
{
    printf("#########################################################################################################\n");
    printf("#\t1- Add a value                                                                            \t#\n");
    printf("#\t2- Search a value                                                                         \t#\n");
    printf("#\t3- Remove the first existence of a value                                                  \t#\n");
    printf("#\t4- Remove all existences of a value                                                       \t#\n");
    printf("#\t5- Print out the array                                                                    \t#\n");
    printf("#\t6- Sort the array in ascending order (positions of elements are preserved)                \t#\n");
    printf("#\t7- Sort the array in descending order (positions of elements are preserved)               \t#\n");
    printf("#\t8: Quit                                                                                   \t#\n");
    printf("#########################################################################################################\n");
}
int validattion(int min, int max)
{
    int a;
    do
    {
        printf("Choice feature: ");
        scanf("%d", &a);
    } while (a < min || a > max);
    return a;
}

void inputArr(int *a, int n)
{
    for (int i = n; i > 0; i--)
    {
        a[i] = a[i - 1];
    }
    scanf("%d", a);
}

void Search(int *a, int n, int x)
{
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            printf("\n%d", i + 1);
}

void printarr(int *a, int n)
{
    printf("Print array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void arrsOrted(int arr[], int n, int chose)
{
    int i, j;
    int haveSwap = 0;
    for (i = 0; i < n - 1; i++)
    {
        haveSwap = 0;
        if (chose == 0)
            for (j = 0; j < n - i - 1; j++)
            {

                if (arr[j] > arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    haveSwap = 1;
                }
            }
        else
        {
            for (j = 0; j < n - i - 1; j++)
            {

                if (arr[j] < arr[j + 1])
                {
                    swap(arr[j], arr[j + 1]);
                    haveSwap = 1;
                }
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
void removearr(int *a, int *n, int nuber, int chose)
{
    for (int i = 0; i < *n - 1; i++)
    {
        if (a[i] == nuber)
        {
            for (int k = i; k < *n - 1; k++)
            {
                a[k] = a[k + 1];
            }

            a[*n - 1] = NULL;
            *n = *n - 1;
            if (chose)
            {
                break;
            }
        }
    }
}

