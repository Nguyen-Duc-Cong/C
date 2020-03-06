#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stireg.h>
#include <math.h>


void input(char arr[]);

int main(int argc, char const *argv[])
{
    char *arr;
    arr = (char *)calloc(100, sizeof(char));
    input(arr);
    int *coust;
    coust = (int *)calloc(256, sizeof(int));
    int len = strlen(arr); 
    for (int i = 0; i < len; i++)
        coust[arr[i]] += 1;
    coust[32] = 0;
    for (int i = 0; i < 256; i++)
        {
            if (coust[i] > 0)
                {
                    printf("\n%c: %d",i, coust[i]);
                    coust[i] = 0;
                }
        }
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