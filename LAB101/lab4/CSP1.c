#include <stdio.h>
#include <cstdlib>
#include <conio.h>
#include <windows.h>
#include <stireg.h>
#include <math.h>
void daoString(char str[]);

int main() 
{ 
    char str[50],c ;
    
	do{
    printf("Please enter string:  ");
    fflush(stdin);
	gets(str); 
	printf("The reversed string:  ");
	daoString(str);
	printf("\nPress any key to continue! or press esc to exit\n");
    fflush(stdin);
	 c=getch();
	} while (c!=27);
} 

void daoString(char str[]) 
{ 
    int length = strlen(str); 
  
    for (int i = length - 1; i >= 0; i--) { 
		if (str[i] == '_') { 
            str[i] = '\0';     
            printf("%s_", &(str[i]) + 1); 
        } 
    }  
    printf("%s", str); 
} 