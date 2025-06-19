#include<stdio.h>

int main(){
    int i=0, sum=0, num;

    scanf("%d", &num);

    while (i <= num){
        sum += i;
        i++;
    }

    printf("The sum of %d numbers : %d", num, sum);

    return 0;
}