#include <stdio.h>

int main(){
printf("Sum Digit Program");
int a = input();
printf("Sum digit: %d", a);
}

int input(){
    int n;
    printf("\nEnter an integer n = ");
    scanf("%d",&n);
    return n;
}
int sumdigits(int n){
    int sum = 0;
    while(n != 0){
            sum += n % 10;
            n /= 10;
    }
    return sum;
}