#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int b[26];
void input(char a[]){
	printf("Please enter string: ");
	gets(a);
}
void outputText(char a[]){
	for(int i=0; i<26; i++){
		if (b[i]!=0) printf("%c\t",(char)(i+65));
	}
}
void outputNumber(char a[]){
	printf("\n");
	for(int i=0; i<26; i++){
		if (b[i]!=0) printf("%d\t",b[i]);
	}
}
void count(char a[]){
	int n=strlen(a);
	for(int i=0; i<26; i++) b[i]=0;
	for(int i=0; i<n; i++){
		if ((int)a[i]<97) b[(int)a[i]-65]++;
		else b[(int)a[i]-97]++;
	}
}
int main(){
	char*a=(char*)calloc(50,sizeof(char));
	input(a);
	count(a);
	outputText(a);
	outputNumber(a);
	system("pause");
}

