#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int a, c, b;
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        swap(&a, &b);
    if (a > c)
        swap(&a, &c);
    if (b > c)
        swap(&b, &c);
    printf("%d %d %d", a, b, c);
    getchar();
    getchar();
    return 0;
}
void swap(int *a, int *b)
{
    int d;
    d = *a;
    *a = *b;
    *b = d;
    return ;
}