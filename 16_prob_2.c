#include<stdio.h>

int main(){
    int factorial=1, num, i=1;

    scanf("%d", &num);
    
    while (i<=num){
        factorial *= i;
        i++;
    }
    
    printf("The factorial of %d num(s) is %d", num, factorial);

    return 0;
}