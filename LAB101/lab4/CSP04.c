#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stireg.h>
#include <math.h>
#define ACBLI 256
#define MAX_ELEMENT 100

void input(char arr[]);
int setArr(char arr[], int coust[]);
void outPut(char arr[], int coust[]);
void outPuttwo(char arr[], int coust[], int max);
int main(int argc, char const *argv[])
{
    char *arr;
    arr = (char *)calloc(MAX_ELEMENT, sizeof(char));
    input(arr);
    int *coust;
    coust = (int *)calloc(ACBLI, sizeof(int));
    int max = 0;
    printf("Times of appearance for each character:\n");
    max = setArr(arr, coust);
    outPut(arr, coust);
    printf("\n-----------------------------------------------------------------------------\nCharacters that appears the most:\n");
    outPuttwo(arr, coust, max);
    free(coust);
    free(arr);
    getch();
    return 0;
}

void input(char arr[])
{
    printf("Please enter string: ");
    fflush(stdin);
    gets(arr);
}
int setArr(char arr[], int coust[])
{
    int max = 0;
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        coust[arr[i]] += 1;
        if (coust[arr[i]] > max)
            max = coust[arr[i]];
    }
    coust[32] = 0;
    return max;
}
void outPut(char arr[], int coust[])
{
    int *test;
    int len = strlen(arr);
    test = (int *)calloc(ACBLI, sizeof(int));
    for (int i = 0; i < len; i++)
        if (coust[arr[i]] > 0 && test[arr[i]] == 0)
        {
            printf("%c %d\t", arr[i], coust[arr[i]]);
            test[arr[i]] = 1;
        }
    free(test);
}
void outPuttwo(char arr[], int coust[], int max)
{
    int len = strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] == max)
            printf("%c\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] == max)
            printf("%d\t", coust[arr[i]]);
    }
}