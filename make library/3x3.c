#include "3x3.h"


void m_tabale(int low, int high)
{
    for(int i = low; i <= high;i++)
    {
        for(int j = low; i <= high;i++)
        {
            printf("%d   ",i*j);
        }
        printf("\n");
    }
}