#include <stdio.h>
#include <math.h>
#include <windows.h>
#include<string.h>
#include<conio.h>
int validDate(int d, int m, int y);
void maindate(int d, int m, int y);
void ASCII(char c1, char c2);
int main(int argc, char const *argv[])
{
    int n;
    int Us;
    do
    {
        printf("\n1- Processing date data");
        printf("\n2- Character data");
        printf("\n3-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (n < 0 && n < 3);
        if (Us == 3)
        {
            printf("good bye");
            break;
        }
        switch (Us)
        {
        case 1:
        {
            int a, b, c;
            printf("enter values of date, month, year");
            scanf("%d%d%d", &a, &b, &c);
            maindate(a,b,c);
            break;
        }
        case 2:
        { char a[2];
            //fflush(NULL);
            printf("enter characters:");
            scanf("%s",a);
            ASCII(a[0],a[1]);
            break;
        }
        }
getch();
        system("cls");
    } while (Us >= 0 && Us <= 3);
    return 0;
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
    char t,c;
      if (c1 > c2 ) 
     { 	t = c1; 
	   	c1 = c2;
		c2= t;
     }
     for(c = c2; c >= c1; c--)
		printf("\n%c, %d, %Xh", c, c, c);
}