#include <stdio.h>
    double makeDouble(int  ipart, int fraction);

int main()
{
	int ipart;
    int fraction;
    printf("enter ipart:");
    scanf("%d",&ipart);
     do
        { 
            printf("\nenter fraction:");
            scanf("%d",&fraction);
        }
     while (fraction<0);
     printf("\nout value:%lf", makeDouble(ipart,fraction));
     getchar();
    getchar();
    return 0;

}
    double makeDouble(int  ipart, int fraction)
{  double d_f= fraction;
    while (d_f >=1) d_f = d_f/10; 
    if (ipart<0) return ipart - d_f; 
    return ipart + d_f ; 
