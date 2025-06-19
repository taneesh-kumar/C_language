#include<stdio.h>

int main(){
    int factorial=1, num;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        factorial *= i;
    }
    
    printf("The factorial of %d num(s) is %d", num, factorial);

    return 0;
}