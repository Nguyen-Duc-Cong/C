#include <stdio.h>
#include <stdlib.h>
#include<time.h>


int intRandom(int min, int max);
int main()
{
    srand(time(NULL));
    int total, x, y, count;
    do
    {
        printf("Accept total: ");
        scanf("%d", &total);
    } while (total < 2 || total > 12);
    count = 1;
    do
    {
        x = intRandom(1, 6);
        y = intRandom(1, 6);
        printf("Result of throw %d: %d + %d\n", count, x, y);
        count++;
    } while (x + y != total);        
    printf("You got your total in %d throws!", --count);

    getchar();getchar();
    return 0;
}
int intRandom(int min, int max)
{
    return rand() % max + min;

}