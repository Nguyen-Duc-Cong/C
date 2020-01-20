#include <stdio.h>
#include <conio.h>
int inputvalue();
void printbinary(int i);
int main()
{
    do
    {
        printf("Convert Dicimal to Binary program\n");
        printbinary(inputvalue());
        printf("\nPress any key to do another conversion.\n");
        getch();
    } while (true);
    return 0;
}
int inputvalue()
{
    int n;
    printf("\tEnter a positive number: ");
    scanf("%d", &n);
    return n;
}
void printbinary(int i)
{
    int n = 0;
    do
    {
        if ((int)i%2 == 0)
            n = n * 10;
        else
            n = n * 10 + 1;
        i = i/2;
    } while (i >= 1);
    int b = 0;
    do
    {
       if ((int)n%10 == 0)
            b = b * 10;
        else
            b = b * 10 + 1;
        n = n/10;  
    } while (n >= 1);
    b = b*10 + n;
    printf("\tBinary number: %d",b);
}