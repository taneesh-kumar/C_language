#include<stdio.h>

int main(){
    int sum=0, num;

    scanf("%d", &num);

    for (int i = 1; i <= num; i++){
        sum += i;
    }
    printf("The sum of %d numbers : %d", num, sum);
    
    return 0;
}