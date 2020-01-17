#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
int main()
{
    char a[100];
    int is_running = 1;
    do
    {
        int len = 0;
        printf("ISBN (0 to quit): ");
        do
        {
            scanf("%s",&a);
            len = strlen(a);
            if ((len == 1) && (a[0] == '0'))
            {
                is_running = 0;
                break;
            }
        } while (len != 10);
        if (is_running == 0)
        {
            printf("bye");
            break;
        }
        int sum = 0;
        for (int i = 0; i < 10; i++)
            sum += (int)(a[i] - '0') * (10 - i);
        if (sum % 11 == 0)
            printf("\nThis is a valid ");
        else
            printf("\nThis is not a valid ISBN");
        printf("\n");
        getchar();
        getchar();
        system("cls");
    }while(1==1);
    //} while (is_running == 1);
    return 0;
}