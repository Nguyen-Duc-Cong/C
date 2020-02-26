#include <stdio.h>
#include <cstdlib>
#include <conio.h>
void fun1(int *r, int *c);
void fun2(int arr[], int r, int c);
void fun3(int m1[], int m2[], int m[], int r, int c);
int main()
{
    int *m1, *m2, *m;
    int r, c;
    int con;
    do
    {
        printf("Matrix Add\n");
        fun1(&r, &c);
        con = r * c;
        fflush(stdin);
        m1 = (int *)calloc(con, sizeof(int));
        m2 = (int *)calloc(con, sizeof(int));
        m = (int *)calloc(con, sizeof(int));
        if (m1 == NULL && m2 == NULL && m == NULL)
        {
            printf("Size value have error");
        }
        else
        {
            printf("Accept matrix m1: \n");
            fun2(m1, r, c);
            printf("Accept matrix m2: \n");
            fun2(m2, r, c);
            fun3(m1, m2, m, r, c);
            printf("m1 + m2 = m \n");
            int count = 0;
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < c; j++)
                {
                    printf("%d\t",*(m + i*r + j + count));
                }
                count++;
                printf("\n");
            }
        }
        printf("\nPress any key to continue\n");
        if (27 == getch())
            break;
    } while (true);
    free(m1);
    free(m2);
    free(m);
}
void fun1(int *r, int *c)
{

    printf("\tAccept size: ");
    scanf("%d%d", r, c);
}

void fun2(int arr[], int r, int c)
{
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", arr + i * r + j + count);
        }
        count++;
    }
}
void fun3(int m1[], int m2[], int m[], int r, int c)
{
    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            *(m + i*r + j + count) = *(m1 + i * r + j + count) + *(m2 + i * r + j + count);
        count++;
    }
}