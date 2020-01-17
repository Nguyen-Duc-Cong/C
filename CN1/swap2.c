#include <stdio.h>

int getUsserchoice()
{
    int choice;
    printf("\n1-Operation 1");
    printf("\n1-Operation 2");
    printf("\n1-Operation out");
    printf("\n choose");
    scanf("%d%c", &choice);
    return choice;
}
int sumbetween(int a, int b)
{
    int t;
    if (a > b)
    {
        t = a;
        a = b;
        b = t;
    }
    int S = 0;
    for (t = a; t < b; t++)
        S += t;
    return S;
}
void function1()
{
    int n1;
    int n2;
    printf("Enter 2 integers:");
    scanf("%d%d", &n1, &n2);
    printf("Sum=%d\n", sumbetween(n1, n2));
}
void PrintAscii(char c1, char c2)
{
    char c;
    if (c1 > c2)
    {
        c = c1;
        c1 = c2;
        c2 = c;
    }
    for (c = c1; c <= c2; c++)
        printf("%c, %d, %3op, %3Xh\n", c, c, c, c);
}
void function2()
{
    char c1;
    char c2;
    printf("Enter 2 integers:");
    scanf("%c%c", &c1, &c2);
    PrintAscii(c1, c2);
}
int main()
{
    int userChoice;
    do
    {
        userChoice = getUsserchoice();
        switch (userChoice)
        {
        case 1:
            function1;
            break;
        case 2:
            function2;
            break;
        default:
            printf("bye");
            break;
        }
    } while (userChoice > 0 && userChoice < 3);
    fflush(stdin);
    getchar();
    return 0;
}