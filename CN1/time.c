#include <stdio.h>

int main()
{
    int h, m, s;
    printf("enter hh:mm:ss");
    scanf("%d%d%d", &h, &m, &s);
       if(s==60)
    {
        s = 0;
        m++;
    }
    if( m == 60)
    {
        m = 0;
        h++;
    }
    if( h == 24)
    {
        h = 0;
    }
    printf("\n%d:%d:%d",h,m,s);
    getch();
    return 0;
}
/*
    int n;
    scanf("%d",&n);
    s += n;
    if (s >= 60)
    {
        s = s % 60;
        m += (int)(s / 60);
    }
    if (m >= 60)
    {
        m = s % 60;
        h += (int)(s / 60);
    }
    if (h >= 24)
        h = s % 24;
    printf("\n%d:%d:%d",h,m,s);
    getch();
    return 0;
}*/
