#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stireg.h>
#include <math.h>

#define SIZE_LISE 100
#define SIZE_NAME 20
void menu();
int validattion(int min, int max);

void addArr(char **a, int *n);
void outArr(char **a, int n);
void removeStu(char **a, int *n);
int searchStu(char **a, int n);
void del(char **a, int x, int *n);
int main()
{
    int n = 0;
    char **a;
    a = (char **)calloc(SIZE_LISE, sizeof(int *));
    for (int i = 0; i < SIZE_LISE; i++)
    {
        a[i] = (char *)calloc(SIZE_NAME, sizeof(int));
    }
    int running = 1;
    while (running)
    {
        menu();
        int chose = (validattion(1, 5));
        switch (chose)
        {
        case 1:
        {
            addArr(a, &n);
            break;
        }
        case 2:
        {
            outArr(a, n);
            removeStu(a, &n);
            break;
        }
        case 3:
        {
            int test = searchStu(a, n);
            if (test > n)
                printf("don't have student in list\n");
            else
                printf("Student %d. %s has in list \n", test + 1, a[test]);
            break;
        }
        case 4:
        {
            outArr(a, n);
            break;
        }
        case 5:
        {
            running = 0;
            break;
        }
        }
        getch();
        system("cls");
    }
    for (int i = 0; i < SIZE_LISE; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}
void menu()
{
    printf("#######################################################################################\n");
    printf("#\t1.	Add a student name .                                            \t#\n");
    printf("#\t2.	Remove a student name.                                          \t#\n");
    printf("#\t3.	Search a student name.                                          \t#\n");
    printf("#\t4.	Print list student.                                             \t#\n");
    printf("#\t5.	Exit                                                            \t#\n");
    printf("#######################################################################################\n");
}
int validattion(int min, int max)
{
    int a;
    do
    {
        printf("Choice number(%d - %d ): ", min, max);
        scanf("%d", &a);
    } while (a < min || a > max);
    return a;
}

void addArr(char **a, int *n)
{
    if (*n == 100)
        printf("list student it full");
    else
    {
        printf("Enter new student name: ");
        fflush(stdin);
        gets(a[*n]);
        printf("Student has been added to list successfuly!");
        *n += 1;
    }
}
void outArr(char **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, a[i]);
    }
}
void removeStu(char **a, int *n)
{
    char b[SIZE_NAME];
    printf("1. Remove forlow name student\n");
    printf("2. remove follow address\n");
    int chose = validattion(1, 2);
    switch (chose)
    {
    case 1:
    {
        printf("Enter name student you want search: ");
        fflush(stdin);
        gets(b);
        for (int i = 0; i < *n; i++)
        {
            if (a[i] == b)
                del(a, i, n);
        }
        break;
    }
    case 2:
    {
        int x;
        printf("Enter number address: ");
        scanf("%d", &x);
        del(a, x, n);
        break;
    }
    }
}
int searchStu(char **a, int n)
{
    char b[SIZE_NAME];
    printf("Enter name student you want search: ");
    fflush(stdin);
    gets(b);
    for (int i = 0; i < n; i++)
    {
        if (strcmp(a[i], b))
            return i;
    }
    return n + 1;
}
void del(char **a, int x, int *n)
{
    for (int i = x; i < *n; i++)
    {
        a[x] = a[x + 1];
    }
    a[*n] = NULL;
    *n -= 1;
}
