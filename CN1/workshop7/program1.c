#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void inputArr(char a[][31], int n);
int Search(char Fname[31], int a[][31], int n);
void outputArr(char name[][31], int n);
void removed(char a[][31], int *n);
int main(int argc, char const *argv[])

{
    int n = 0;
    char a[100][31];
    int Us;
    do
    {
        printf("\n1- Add a student");
        printf("\n2- Remove a student");
        printf("\n3- Search a student");
        printf("\n4- Print the list in ascending order");
        printf("\n5-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (Us < 0 && Us > 5);
        if (Us == 5)
        {
            printf("good bye");
            break;
        }
        switch (Us)
        {
        case 1:
        {
            printf("\nAdd a student:");
            printf("\nHow many student you want Add: ");
            int S;
            scanf("%d", &S);
            int t = n;
            for (int i = 0 + t; i < S + t; i++)
            {
                if (n == 100)
                {
                    printf("The index it full");
                    break;
                }
                n++;
                inputArr(a, i);
            }
            break;
        }
        case 2:
        {
            removed(a, &n);
            break;
        }
        case 3:
        {
            char x[31];
            printf("\nSearch a value:");
            scanf("%30[^\n]", &x);
            Search(x, a, n);
            getch();
            break;
        }
        case 4:
        {
            outputArr(a, n);
            getch();
            break;
        }
        }
        system("cls");
    } while (Us >= 0 && Us <= 5);
    return 0;
}

void inputArr(char a[][31], int n)
{
    fflush(stdin);
    scanf("%30[^\n]", a[n]);
}
int Search(char Fname[31], int a[][31], int n)
{
    int ok = 0;
    for (int i = 0; (i < n) && (ok == 0); i--)
        if (strcmp(Fname, a[i]))
            ok = i;
    return ok;
}
void outputArr(char a[][31], int n)
{
    for (int i = 0; i < n; i++)
        puts(a[i]);
}
void removed(char list[][31], int *pn)
{
    outputArr(list, *pn);
    printf("Which Name you want to removed?(input a number) : ");
    int del, i;
    scanf("%d", &del);
    if (del >= 0 && del < *pn)
    {
        for (i = del + 1; i < *pn; i++)
            strcpy(list[i - 1], list[i]);
        printf("Removed!\n");
        (*pn)--;
    }
    else
        printf("UnRemoved!\n");
    system("pause");
    system("cls");
}
