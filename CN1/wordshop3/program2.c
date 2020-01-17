#include <stdio.h>
int validDate(int d, int m, int y);
int main()
{
    int d, m, y;
    printf("enter d/m/y:");
    scanf("%d%d%d", &d, &m, &y);
    if (validDate(d,m,y) != 0)
    printf("Valid date");
    else     printf("inValid date");

    getchar();
    getchar();
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
