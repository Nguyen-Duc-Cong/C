#include<stdio.h>
#include<time.h>
//#include<conio.h>
int main(int argc, char const *argv[])
{
    time_t t1 = time(NULL);
    int x  = 0;
    for(int i = 0; i <1000000000;i++)x+=1;
    time_t t2 = time(NULL);
    double dt = difftime(t2,t1);
    printf("\n%lf\n",dt);
    //getch();
    getchar();getchar();
    return 0;
}
