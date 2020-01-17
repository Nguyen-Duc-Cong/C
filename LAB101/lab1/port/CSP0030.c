#include <stdio.h>
#include <math.h>
int inPut();

void inPutElement(int *a, int n);

void sum(int *a, int n);

int main()
{

    printf("Sum Even Odd program\n");
    int n = inPut();
    int a[n];
    char chose;
    do
    {
        inPutElement(a, n);
        sum(a, n);
        printf("\nPress any key to continue, N/n to exit");
        fflush(stdin);
        scanf("%c", &chose);
    } while (chose == 'n' || chose == 'N');
}

void inPutElement(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &a[i]);
    }
}

int inPut()
{
    int n;
    printf("Enter a number of element n = ");
    scanf("%d", &n);

    return n;
}

void sum(int *a, int n)
{
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
            even = a[i] + even;
        else
            odd = a[i] + odd;
    }
    printf("\nSum of Even: %d", even);
    printf("\nSum of Odd: %d", odd);
}