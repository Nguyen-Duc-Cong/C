#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
#define INTEREST 0.75 
void menu();
int validattion(int min, int max);
float received(); 
void quadratic();
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
            quadratic();
            getch();
            break;
            }
        case 2:
        {
            printf("Total amount received = %f", received() );
            getch();
            break;

        }
        case 3:
            running = 0;
            break;
        }
        system("cls");
    }
    return 0;
}

void menu()
{
    printf("#################################################\n");
    printf("#\t1: Quadratic equation                \t#\n");
    printf("#\t2: Bank deposit problem              \t#\n");
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
float received(){
    int dep;
    int months;
    printf("deposit :");
    scanf("%d",&dep);
    printf("months :");
    scanf("%d", &months);
    return INTEREST * dep * months;
}
void quadratic () {
    double a, b, c, dis, root1, root2, realPart, imagPart;
    printf("Enter  a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    dis = b * b - 4 * a * c;

    if (dis > 0) {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    else if (dis == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
} 