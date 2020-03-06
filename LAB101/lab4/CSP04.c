#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void input(char arr[]);

int main(int argc, char const *argv[])
{
    char *arr;
    arr = (char *)calloc(100, sizeof(char));
    input(arr);
    int *coust;
    coust = (int *)calloc(256, sizeof(int));
    int max = 0;
    printf("Times of appearance for each character:\n");
    int len = strlen(arr); 
    for (int i = 0; i < len; i++)
    {
        coust[arr[i]] += 1;
        if (coust[arr[i]] > max)
            max = coust[arr[i]];
    }
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] > 0)
            printf("%c\t",arr[i]);
            coust[arr[i]] = 0;
    }
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] > 0)
            printf("%d\t",coust[arr[i]]);
    }
    printf("\n-----------------------------------------------------------------------------\nCharacters that appears the most:\n");
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] ==  max)
            printf("%c\t",arr[i]);

    }
    printf("\n");
    for (int i = 0; i < len; i++)
    {
        if (coust[arr[i]] ==  max)
            printf("%d\t",coust[arr[i]]);

    }
    getch();    
    return 0;
}

void input(char arr[])
{
    printf("Please enter string: ");
    fflush(stdin);
    gets(arr);
}