#include<stdio.h>

int main(){
    int num, i=2;

    scanf("%d", &num);

    int isPrime = 1;
    if (num <= 1) {
        isPrime = 0;
    } else {
        while (i <= (num/2)){
            if (num % i == 0){
                isPrime = 0;
                break;
            }
            i++;
        }
    }
    if (isPrime)
        printf("Prime");
    else
        printf("Not Prime");
    
    return 0;
}