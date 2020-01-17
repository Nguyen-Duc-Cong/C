#include <stdio.h>
#include <math.h>
#include <windows.h>

int validDate(int d, int m, int y);
int main()
{
    int n;
    int Us;
    int d,m,y;
    do
    {
        printf("\n1-Fibonacci sequence");
        printf("\n2-Check a date");
        printf("\n3-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (n < 0 && n < 3);
        if (Us == 3)
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
                
            case 2:
                printf("enter d/m/y:");
                scanf("%d%d%d", &d, &m, &y);
                if (validDate(d, m, y) != 0)
                    printf("Valid date");
                else
                    printf("inValid date");
                break;
            }
        }

        getchar();
        getchar();
        system("cls");
    } while (Us >= 1 && Us < 4);
    return 0;
}

int validDate(int d, int m, int y)
{
    int maxd = 31;
    if (d < 1 || d > 31 || m < 1 || m > 12)
        return 0;
    if (m == 4 || m == 6 || m == 9 || m == 11)
        maxd = 30;
    else if (m == 2)
    {
        if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            maxd = 29;
        else
            maxd = 28;
    }
    return d <= maxd;
}                       
int Fibo(int n)
{
    int F;
    if( n <= 2) F=1;
    else F= Fibo(n-1)-Fibo(n-2);
    return F;
}
