#include <stdio.h>
#include <math.h>
#include <windows.h>

void Quadratic(float a, float b, float c);
float bankdeposit(float deposit, float rate, int month);
int main(int argc, char const *argv[])
{
    int n;
    int Us;
    do
    {
        printf("\n- Quadratic equation ");
        printf("\n2- Bank deposit problem");
        printf("\n3-Quit\n");
        do
        {
            scanf("%d", &Us);
        } while (Us < 0 && Us > 3);
        if (Us == 3)
        {
            printf("good bye");
            break;
        }
        switch (Us)
        {
        case 1:
        {
            float a, b, c;
            printf("Enter a, b, c ");
            scanf("%f%f%f", &a, &b, &c);
            Quadratic(a, b, c);
            break;
        }
        case 2:
        {
            printf("enter his/her deposit, yearly rate, number of years");
            int d, r, m;
            scanf("%f%f%f", &d, &r, &m);
            printf("his/her amount after this duration: %f", bankdeposit(d, r, m));
            break;
        }
        }

        getchar();
        getchar();
        system("cls");

    } while (Us >= 0 && Us <= 3);
    return 0;
}

void Quadratic(float a, float b, float c)
{
    if (a == 0)
        printf("First degree equation");
    else
    {
        int delta = b * b / 4 - a * c;
        if (delta < 0)
            printf("the equation has no solution");
        else
        {
            printf("\nx1= %f\n", (-b / 2 + sqrt(delta)) / a);
            printf("\nx1= %f\n", (-b / 2 - sqrt(delta)) / a);
        }
    }
}
float bankdeposit(float deposit, float rate, int month)
{
    int n = 1;
    while (n <= month)
    {
        deposit += deposit * rate;
        n++;
    }
    return deposit;
}