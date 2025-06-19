#include<stdio.h>

int main(){
    int num;

    scanf("%d", &num);

    int isPrime = 1;
    if (num <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}