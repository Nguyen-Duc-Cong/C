#include <stdio.h>
#include<windows.h>
#define PI 3.14
void menu();
float CalFueEco();
int validattion(int min, int max);
float CalDisTra();
void ReFuEcocal();
int main()
{
    int running = 1;
    while (running)
    {
        menu();
        int i = (validattion(1, 4));
        switch (i)
        {
        case 1:
        {
            printf("your car averaged %f miles per galion\n", CalFueEco());
            break;
        }
        case 2:
        {
            printf("number of miles the car has traveled: %.2f", CalDisTra());
            break;
        }
        case 3:
            ReFuEcocal();
            break;
        case 4:
            printf("\nNext");
            running = 0;
            break;
        }
        getchar();
        getchar();
        system("cls");
    }
    return 0;
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
void menu()
{
    printf("#################################################\n");
    printf("#\t1: Calculating Fuel Economy         \t#\n");
    printf("#\t2: Calculating Distance Traveled    \t#\n");
    printf("#\t3: Revised Fuel Economy Calculation \t#\n");
    printf("#\t4: Next                             \t#\n");
    printf("#################################################\n");
}

float CalFueEco()
{
    int time = 0;
    float gasoline, speed = 0;
    printf("input time had traveled (minutes): ");
    scanf("%d", &time);
    printf("Input speed (miles/hour): ");
    scanf("%f", &speed);
    printf("Input gasoline: ");
    scanf("%f", &gasoline);
    float fuelEfficiency = (speed * time / 60) / gasoline;
    return fuelEfficiency;
}
float CalDisTra()
{
    float radius;
    int revo;
    do
    {
        printf("input radius of the tires : ");
        scanf("%f", &radius);
    } while (radius < 0);
    do
    {
        printf("Input number of revolutions of the tires : ");
        scanf("%d", &revo);
    } while (revo < 0);
    return ((2 * PI * radius * revo) / 63360);
}
void ReFuEcocal()
{
    float miles,gal;
    int revo;
    miles = CalDisTra();
    do{
    printf("How many your car use: ");
    scanf("%f", &gal);
    }while (gal < 0);
    printf("%.2f miles per gallon",miles/gal);
}