#include <stdio.h>
#include <math.h>
#include <windows.h>
#include<conio.h>
void inputArr(int *a, int n);
void Search(int *a, int n, int x);
void outputArr(int *a, int n);
void range(int *a, int n, int min, int max);
void ascending(int *a, int n);

int main(int argc, char const *argv[])
{
    int n = 0;
    int a[100];
    int Us;
    do
    {
        printf("\n1- Add  a value");
        printf("\n2- Search a value");
        printf("\n3- Print out the array ");
        printf("\n4- Print out values in a range");
        printf("\n5- Print out the array in ascending order ");
        printf("\n6-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (Us < 0 && Us > 5);
        if (Us == 6)
        {
            printf("good bye");
            break;
        }
        switch (Us)
        {
        case 1:
        {
            printf("\nAdd  a value:");
            n++;
            inputArr(a, n);
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
            outputArr(a, n);
            getch();
            break;
        }
        case 4:
        {
            int min, max;
            printf("\nPrint out values in a range:");
            printf("\nmin:");
            scanf("%d", &min);
            printf("\nmax");
            scanf("%d", &max);
            if(max > n){
                printf("\nerror don't have value");
                break;
            }
            range(a, n, min, max);
            getch();
            break;
        }
        case 5:
        {
            ascending(a, n);
            break;
        }
        }
        system("cls");
    } while (Us >= 0 && Us <= 5);
    return 0;
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
            printf("\n%d", i+1);
}
void outputArr(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}
void range(int *a, int n, int min, int max)
{
    for (int i = min - 1; i < max; i++)
        printf("\n%d", a[i]);
}
void ascending(int *a, int n)
{
    int i,j;
    int minIndex;
    for ( i = 0; i < n - 1; i++)
    {
        minIndex = i;
    
        for ( j = i+1; j < n; j++) if(a[minIndex] > a[j] ) minIndex = j;
            if (minIndex  > i)
            {
                int t = a[minIndex];
                a[minIndex] = a[i];
                a[i] = t;
            }
    }
}