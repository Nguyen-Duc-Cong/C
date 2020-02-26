#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <string.h>
#define MAX_ELEMENTS 50
void fun1(char **a, int n);
void fun2(char **a, int n);
void fun3(char **a, int n);

int main()
{
    char **a;
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    a = (char **)calloc(n, sizeof(int *));
    for (int i = 0; i < n; i++)
    {
        a[i] = (char *)calloc(MAX_ELEMENTS, sizeof(int));
    }
    fun1(a, n);
    printf("List input name: \n");
    fun3(a, n);
    fun2(a, n);
    printf("List out name: \n");
    fun3(a, n);
    getch();
    for (int i = 0; i < SIZE_LISE; i++)
    {
        free(a[i]);
    }
    free(a);
    return 0;
}

void fun1(char **a, int n)
{

    printf("Enter %d names\n", n);
    fflush(stdin);
    for (int i = 0; i < n; i++)
    {
        gets(a[i]);
    }
}
void fun2(char **a, int n)
{
    char temp[MAX_ELEMENTS];
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(a[i], a[j]) > 0)
            {
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
}
void fun3(char **a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d. %s\n", i + 1, a[i]);
    }
}