#include <stdio.h>
#include <windows.h>
#include <conio.h>
void menu();
int validattion(int min, int max);
int maxarr(int *a, int n);
int main()
{
    int a[100];
    int n = 0;
    int running = 1;
    while (running)
    {
        menu();
        int chose = (validattion(1, 5));

        switch (chose)
        {
        case 1:
        {

            do
            {
                scanf("%d", &a[n]);
                if (a[n] == 0)
                {
                    a[n--] = NULL;
                    break;
                }
                else
                {
                    n++;
                }
            } while (1);
            break;
        }
        case 2:
        {
            printf("Print array: ");
            for (int i = 0; i < n; i++)
                printf("%d ", a[i]);
            getch();
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
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 2 == 0)
                    printf("%d ", a[i]);
            }
            getch();
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

int maxarr(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];
    return max;
}