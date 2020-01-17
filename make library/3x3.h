#ifndef _3x3_h_
#define _3x3_h_

void m_tabale(int low, int high)
{
    printf("  ");
    for (int i = low; i <= high; i++ )
        printf("%d ",i);
    printf("\n");
     for(int i = low; i <= high;i++)
    {
        printf("\n");
        printf("%d ",i);
        for(int j = low; j <= high;j++)
        {
            printf("%d ",i*j);

        }
    }
}

#endif