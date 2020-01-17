#include <stdio.h>
#include <math.h>

int isPerfectSquare(int number);
int main()
{
    int num;
    int um;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (isPerfectSquare(num))
        printf("%d is a perfect square.", num);
    else
        printf("%d is not a perfect square.", num);

    return 0;
}
int isPerfectSquare(int number)
{
    int iVar;
    float fVar;

    fVar = sqrt((double)number);
    iVar = fVar;

    if (iVar == fVar)
    {
        *um = iVar;
        return 1;
    }

    else
        return 0;
}