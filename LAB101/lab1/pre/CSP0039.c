#include <stdio.h>
#include <windows.h>
void menu();
int validattion(int min, int max);
void maindate(int d, int m, int y);
int validDate(int d, int m, int y);
void ASCII(char c1, char c2);
int main()
{
    int running = 1;
    while (running)
    {
        menu();
        int i = (validattion(1, 3));

        switch (i)
        {
        case 1:
            {
            int a, b, c;
            printf("enter values/date/month/year");
            scanf("%d%d%d", &a, &b, &c);
            maindate(a,b,c);
            break;
            }
        case 2:
        {
            char a[2];
            printf("enter characters:");
            printf("\nEnter value : ");
            fflush(stdin);
            gets(a);
            ASCII(a[0], a[1]);
            break;
        }
        case 3:
            running = 0;
            break;
        }
        getchar();
        getchar();
        system("cls");
    }
    return 0;
}

void menu()
{
    printf("#################################################\n");
    printf("#\t1: Processing date data              \t#\n");
    printf("#\t2: character data                    \t#\n");
    printf("#\t3: Quit                              \t#\n");
    printf("#################################################\n");
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
void maindate(int d, int m, int y)
{
    
    if (validDate(d,m,y) != 0)
    printf("Valid date");
    else     printf("inValid date");
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
void ASCII(char c1, char c2)
{
    char t, c;
    if (c1 > c2)
    {
        t = c1;
        c1 = c2;
        c2 = t;
    }
    for (c = c2; c >= c1; c--)
        printf("\n%c, %d, %Xh", c, c, c);
        //git w
}