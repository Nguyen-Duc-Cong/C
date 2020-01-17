#include <stdio.h>
#include <windows.h>
#include <conio.h>
void menu();
int validattion(int min, int max);
void arrinput(int a[], int *n);
int maxarr(int *a, int n);
void printarr(int *a, int n);
void even(int *a, int n);
int main()
{
    int a[100];
    int running = 1;
    while (running)
    {
        menu();
        int i = (validattion(1, 5));
        int n = 0;
        switch (i)
        {
        case 1:
        {
            printf("%d",n);
            arrinput(a, &n);
            break;
        }
        case 2:
        {
            printarr(a, n);
            break;
        }
        case 3:
        {
            printf("Maxmum  value : %d", maxarr(a, n));
            getch();
            break;
        }
        case 4:
        {
            printf("Print even value: ");
            even(a, n);
            break;
        }
        case 5:
        {
            running = 0;
            break;
        }
        }
        //6getch();
        system("cls");
    }
    return 0;
}

void menu()
{
    printf("#########################################################################################################\n");
    printf("#\t1: 	User input the array is  elements                                                    \t#\n");
    printf("#\t2: 	The program displays all the array is elements.                                      \t#\n");
    printf("#\t3: 	The program displays the max element in the array.                                   \t#\n");
    printf("#\t4: 	The program displays all the even numbers in the array.                              \t#\n");
    printf("#\t5: Quit                                                                                   \t#\n");
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
void arrinput(int a[], int *n)
{
    printf("%d", *n);
    int t[1];
    int i = *n;
    printf("Enter value: \n");
      do
            {
                scanf("%d", &a[i]);
                if (a[i] == 0)
                    break;
                else
                {
                    i++;
                }

            } while (1);
    n = &i;
    printf("%d", *n);
    getch();
}
int maxarr(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}
void printarr(int *a, int n)
{
    printf("Print array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    getch();
}
void even(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            printf("%d ", a[i]);
    }
    getch();
}