#include<stdio.h>

int fl(int n);
int main()
{
    //int n,k;
    scanf("%d%d",&n,&k);
    float c;
    c = fl(n)/(fl(k)*fl(n-k));
    printf("%.4f",c);
    getchar();
    getchar();
    return 0;
}
int fl(int n)
{
    int T,i;
    T = 1;
    for(i = 1;i <= n; i++)
        T *= i;
    return T;
}