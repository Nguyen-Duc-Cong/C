#include <stdio.h>
#include <math.h>
#include <windows.h>

float opt1(int n);
int opt2(int n);
int opt3(int n);

int main()
{
    int n;
    int Us;
    do
    {
        printf("\n1");
        printf("\n2");
        printf("\n3");
        printf("\n4-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (n < 0 && n < 4);
        if (Us == 4)
            break;
        switch (Us)
        {
            {
            case 1:
                do
                {
                    printf("\n enter n:");
                    scanf("%d", &n);
                } while (n < 0);
                printf("%f", opt1(n));
                break;
            case 2:
                do
                {
                    printf("\n enter n:");
                    scanf("%d", &n);
                } while (n < 0);
                printf("%d", opt2(n));
                break;

            case 3:
                do
                {
                    printf("\n enter n:");
                    scanf("%d", &n);
                } while (n < 0);
                opt3(n);
               // printf("%d", opt3(n));
            }
        }

        getchar();
        getchar();
        system("cls");
    } while (Us >= 1 && Us < 5);
    return 0;
}

float opt1(int n)
{
    float T = 1, P = 1, K = 1;
    for (int i = 2; i <= n; i++)
    {
        T += i;
        P *= i;
                K += T / P;

    }
    return K;
}
int opt2(int n)
{
    int F;
    if (n <= 2)
        F = 1;
    else
        F = opt2(n - 1) + opt2(n - 2);
    return F;
}
int opt3(int n)
{
    int F1 = 1, F2 = 1, F, Fl = 1, Fll = 1;
    printf("\nF1=%d", F1);
    printf("\nF2=%d", F2);

    for (int i = 3; i <= n; i++)
    {
        F = Fl + Fll;
        Fll = Fl;
        Fl = F;
        printf("\nF%d= %d", i, F);
    }
}